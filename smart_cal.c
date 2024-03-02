#include "smart_cal.h"

int calculate(char *input, double *output) {
  queue_n queue = {0};
  createQueue(&queue);
  stack_n stack = {0};
  createStack(&stack);
  // MAIN ALGO POLISH NOTATION
  if (convertToReversePolish(&queue, &stack, input)) {
    return ERROR_NOTAITION;
  }
  double x = 100;
  // CONVERSATION TO ANSWER
  if (fromKurwaToAnswer(&queue, &stack, x, output)) {
    return ERROR_KURWA;
  }

  return 0;
}

int convertToReversePolish(queue_n *queue, stack_n *stack, char *input) {
  while (*input != '\0') {
    if ((*input >= '0' && *input <= '9') || *input == 'x' || *input == 'p') {
      if (*input == 'x' || *input == 'p') {
        enqueueOperator(queue, *input);
        input++;
      } else {
        char number_stirng[256] = {0};
        int is_one_dot = 0;
        int i = 0;
        while ((*input >= '0' && *input <= '9') ||
               (*input == '.' && !is_one_dot)) {
          if (*input == '.') {
            is_one_dot = 1;
            number_stirng[i++] = '.';
            if (*(input + 1) < '0' || *(input + 1) > '9') {
              return ERROR_DOT;
            }
          } else {
            number_stirng[i++] = *input;
          }
          input++;
        }
        if (*input == '.' && is_one_dot) {
          freeStack(stack);
          freeQueue(queue);
          return ERROR_DOT;
        }

        double number = strtod(number_stirng, NULL);
        enqueueNumber(queue, number);
      }

    } else if (strchr("+-*/^cstalm(", *input) != NULL) {
      char parsed_oper = parseFns(&input, *queue);
      if (parsed_oper == NUN) {
        freeQueue(queue);
        freeStack(stack);
        return ERROR_FNC_NAME;
      }
      int priority = getPriority(parsed_oper);
      if (!isEmptyStack(*stack)) {
        while (!isEmptyStack(*stack) && stack->top->priority >= priority &&
               parsed_oper != '(') {
          node_n popped_oper = popStack(stack);
          enqueueOperator(queue, popped_oper.token);
        }
      }
      pushOperator(stack, parsed_oper);
      input++;
    } else if (*input == ')') {
      while (!isEmptyStack(*stack) && stack->top->token != '(') {
        node_n popped_operator = popStack(stack);
        enqueueOperator(queue, popped_operator.token);
      }
      if (isEmptyStack(*stack)) {
        freeQueue(queue);
        return ERROR_PARENTHESIS;
      } else {
        popStack(stack);
        if (!isEmptyStack(*stack) && stack->top->token > 0 &&
            stack->top->token < 10) {
          node_n popped_operator = popStack(stack);
          enqueueOperator(queue, popped_operator.token);
        }
      }
      input++;
    } else {
      freeQueue(queue);
      freeStack(stack);
      return ERROR_SYMBOL;
    }
  }
  while (!isEmptyStack(*stack)) {
    if (stack->top->token == '(') {
      return ERROR_PARENTHESIS;
    }
    node_n popped_operator = popStack(stack);
    enqueueOperator(queue, popped_operator.token);
  }
  return 0;
}

int fromKurwaToAnswer(queue_n *queue, stack_n *stack, double x,
                      double *result) {
  while (!isEmptyQueue(*queue)) {
    node_n first_node = dequeue(queue);
    if (first_node.priority == 0 || first_node.token == 'x' ||
        first_node.token == 'p') {
      if (first_node.token == 'x') {
        first_node.number = x;
        first_node.token = '\0';
      } else if (first_node.token == 'p') {
        first_node.number = PI;
        first_node.token = '\0';
      }
      pushNumber(stack, first_node.number);
    } else if (first_node.priority >= 4) {
      if (isEmptyStack(*stack)) {
        return ERROR_KURWA;
      }
      node_n operand = popStack(stack);
      switch (first_node.token) {
        case COS:
          operand.number = cos(operand.number);
          break;
        case TAN:
          operand.number = tan(operand.number);
          break;
        case SIN:
          operand.number = sin(operand.number);
          break;
        case SQRT:
          operand.number = sqrt(operand.number);
          break;
        case ACOS:
          operand.number = acos(operand.number);
          break;
        case ASIN:
          operand.number = asin(operand.number);
          break;
        case ATAN:
          operand.number = atan(operand.number);
          break;
        case LN:
          operand.number = log(operand.number);
          break;
        case LOG:
          operand.number = log10(operand.number);
          break;
        case MINUS_URINA:
          operand.number = operand.number * -1;
          break;
      }
      pushNumber(stack, operand.number);
    } else if (first_node.priority < 4) {
      if (isEmptyStack(*stack)) {
        return ERROR_KURWA;
      }
      node_n first_operand = popStack(stack);
      if (isEmptyStack(*stack)) {
        freeQueue(queue);
        return ERROR_NOTAITION;
      }
      node_n second_operand = popStack(stack);
      switch (first_node.token) {
        case '+':
          first_operand.number = second_operand.number + first_operand.number;
          break;
        case '-':
          first_operand.number = second_operand.number - first_operand.number;
          break;
        case MOD:
          first_operand.number =
              fmod(second_operand.number, first_operand.number);
          break;
        case '*':
          first_operand.number = second_operand.number * first_operand.number;
          break;
        case '/':
          first_operand.number = second_operand.number / first_operand.number;
          break;
        case '^':
          first_operand.number =
              pow(second_operand.number, first_operand.number);
          break;
      }

      pushNumber(stack, first_operand.number);
    }
  }
  if (isEmptyStack(*stack)) {
    return ERROR_KURWA;
  }
  node_n result_node = popStack(stack);
  if ((result_node.priority != 0 && result_node.token != '\0') ||
      is_inf(result_node.number) || is_nan(result_node.number) ||
      !isEmptyStack(*stack)) {
    return ERROR_KURWA;
  }

  *result = result_node.number;
  return 0;
}

int getPriority(char operator) {
  return (operator== '(')                                    ? 0
         : (strchr("+-", operator))                          ? 1
         : (strchr("*/", operator) || operator== MOD)        ? 2
         : (operator== '^')                                  ? 3
         : (operator== PLUS_URINA || operator== MINUS_URINA) ? 5
                                                             : 4;
}

char parseFns(char **input, queue_n queue) {
  char operator= '\0';
  if (strchr("+-*/^(", **input) != NULL) {
    switch (**input) {
      case '+':
        (*input)--;
        operator=(strchr("1234567890)xp", **input) == NULL ||
                  isEmptyQueue(queue))
            ? PLUS_URINA
            : '+';
        (*input)++;
        break;
      case '-':
        (*input)--;
        operator=(strchr("1234567890)xp", **input) == NULL ||
                  isEmptyQueue(queue))
            ? MINUS_URINA
            : '-';
        (*input)++;
        break;
      default:
        operator= ** input;
    }
    (*input)++;
  } else
    switch (**input) {
      case 'c':
        operator= *(++(*input)) != 'o' ? NUN
        : *(++(*input)) != 's'         ? NUN
        : *(++(*input)) != '('         ? NUN
                                       : COS;
        break;
      case 't':
        operator= *(++(*input)) != 'a' ? NUN
        : *(++(*input)) != 'n'         ? NUN
        : *(++(*input)) != '('         ? NUN
                                       : TAN;
        break;
      case 's':
        (*input)++;
        switch (**input) {
          case 'i':
            operator= *(++(*input)) != 'n' ? NUN
            : *(++(*input)) != '('         ? NUN
                                           : SIN;
            break;
          case 'q':
            operator= *(++(*input)) != 'r' ? NUN
            : *(++(*input)) != 't'         ? NUN
            : *(++(*input)) != '('         ? NUN
                                           : SQRT;
            break;
          default:
            operator= NUN;
        }
        break;
      case 'a':
        (*input)++;
        switch (**input) {
          case 'c':
            operator= *(++(*input)) != 'o' ? NUN
            : *(++(*input)) != 's'         ? NUN
            : *(++(*input)) != '('         ? NUN
                                           : ACOS;
            break;
          case 's':
            operator= *(++(*input)) != 'i' ? NUN
            : *(++(*input)) != 'n'         ? NUN
            : *(++(*input)) != '('         ? NUN
                                           : ASIN;
            break;
          case 't':
            operator= *(++(*input)) != 'a' ? NUN
            : *(++(*input)) != 'n'         ? NUN
            : *(++(*input)) != '('         ? NUN
                                           : ATAN;
            break;
          default:
            operator= NUN;
        }
        break;
      case 'l':
        (*input)++;
        switch (**input) {
          case 'n':
            operator= *(++(*input)) != '(' ? NUN : LN;
            break;
          case 'o':
            operator= *(++(*input)) != 'g' ? NUN
            : *(++(*input)) != '('         ? NUN
                                           : LOG;
            break;
          default:
            operator= NUN;
        }
        break;
      case 'm':
        operator= *(++(*input)) != 'o' ? NUN : *(++(*input)) != 'd' ? NUN : MOD;
        (*input)++;
        break;
    }
  (*input)--;
  return operator;
}
