#include "smart_cal.h"

void createQueue(queue_n* queue) {
  queue->first_in = NULL;
  queue->last_out = NULL;
}

int isEmptyQueue(queue_n queue) {
  return queue.first_in == NULL && queue.last_out == NULL;
}

void enqueueNumber(queue_n* queue, double number) {
  node_n* new_node = (node_n*)malloc(sizeof(node_n));
  if (new_node) {
    new_node->number = number;
    new_node->priority = 0;
    new_node->token = '\0';
    new_node->next = NULL;
    if (isEmptyQueue(*queue)) {
      queue->first_in = new_node;
      queue->last_out = new_node;
    } else {
      queue->last_out->next = new_node;
      queue->last_out = new_node;
    }
  }
}

void enqueueOperator(queue_n* queue, char token) {
  node_n* new_node = (node_n*)malloc(sizeof(node_n));
  int priority = (token == '(')                                  ? 0
                 : (strchr("+-", token))                         ? 1
                 : (strchr("*/", token) || token == MOD)         ? 2
                 : (token == '^')                                ? 3
                 : (token == PLUS_URINA || token == MINUS_URINA) ? 5
                                                                 : 4;
  if (new_node) {
    new_node->token = token;
    new_node->number = 0;
    new_node->priority = priority;
    new_node->next = NULL;
    if (isEmptyQueue(*queue)) {
      queue->first_in = new_node;
      queue->last_out = new_node;
    } else {
      queue->last_out->next = new_node;
      queue->last_out = new_node;
    }
  }
}

node_n dequeue(queue_n* queue) {
  node_n* first_in = queue->first_in;
  node_n dequeued = *first_in;
  queue->first_in = first_in->next;
  if (queue->first_in == NULL) {
    queue->last_out = NULL;
  }

  free(first_in);
  return dequeued;
}

void freeQueue(queue_n* queue) {
  while (!isEmptyQueue(*queue)) {
    dequeue(queue);
  }
}