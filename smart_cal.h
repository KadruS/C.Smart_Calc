#ifndef SMART_CAL_H
#define SMART_CAL_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI \
  3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196

#define is_nan(x) __builtin_isnan(x)
#define is_inf(x) __builtin_isinf(x)

enum tokens {
  NUN,
  COS,
  TAN,
  SIN,
  SQRT,
  ACOS,
  ASIN,
  ATAN,
  LN,
  LOG,
  MOD,
  PLUS_URINA,
  MINUS_URINA
};

enum errors {
  OK,
  ERROR_DOT,
  ERROR_FNC_NAME,
  ERROR_SYMBOL,
  ERROR_PARENTHESIS,
  ERROR_NOTAITION,
  ERROR_KURWA
};

typedef struct node_n {
  double number;
  int priority;
  char token;
  struct node_n *next;
} node_n;

typedef struct stack_n {
  node_n *top;
} stack_n;

typedef struct queue_n {
  node_n *first_in;
  node_n *last_out;
} queue_n;

int calculate(char *input, double *output);
int getPriority(char operat);
char parseFns(char **input, queue_n queue);
int convertToReversePolish(queue_n *queue, stack_n *stack, char *input);
int fromKurwaToAnswer(queue_n *queue, stack_n *stack_n, double x,
                      double *result);

// Stack
void createStack(stack_n *stack);
int isEmptyStack(stack_n stack);
void pushNumber(stack_n *stack, double number);
void pushOperator(stack_n *stack, char token);
node_n popStack(stack_n *stack);
void freeStack(stack_n *stack);

// Queue
void createQueue(queue_n *queue);
int isEmptyQueue(queue_n queue);
void enqueueNumber(queue_n *queue, double number);
void enqueueOperator(queue_n *queue, char token);
node_n dequeue(queue_n *queue);
void freeQueue(queue_n *queue);

#endif  // SMART_CAL_H
