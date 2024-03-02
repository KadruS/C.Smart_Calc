#include "smart_cal.h"

void createStack(stack_n *stack) { stack->top = NULL; }

int isEmptyStack(stack_n stack) { return stack.top == NULL; }

void pushNumber(stack_n *stack, double number) {
  node_n *new_node = (node_n *)malloc(sizeof(node_n));
  if (new_node) {
    new_node->number = number;
    new_node->priority = 0;
    new_node->token = '\0';
    new_node->next = stack->top;
    stack->top = new_node;
  }
}

void pushOperator(stack_n *stack, char token) {
  int priority = (token == '(')                                  ? 0
                 : (strchr("+-", token))                         ? 1
                 : (strchr("*/", token) || token == MOD)         ? 2
                 : (token == '^')                                ? 3
                 : (token == PLUS_URINA || token == MINUS_URINA) ? 5
                                                                 : 4;
  node_n *new_node = (node_n *)malloc(sizeof(node_n));
  if (new_node) {
    new_node->token = token;
    new_node->number = 0;
    new_node->priority = priority;
    new_node->next = stack->top;
    stack->top = new_node;
  }
}

node_n popStack(stack_n *stack) {
  node_n *top_node = stack->top;
  node_n popped_node = *top_node;
  stack->top = top_node->next;
  free(top_node);

  return popped_node;
}

void freeStack(stack_n *stack) {
  while (!isEmptyStack(*stack)) {
    popStack(stack);
  }
}
