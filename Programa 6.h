#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>
struct tqnode{
    struct tqnode* next;
    char* value;
} typedef qnode;
struct{
    qnode* head;
    qnode* tail;
    size_t count;
} typedef queue;

queue* q_new(void);
void q_enqueue(queue* q, char* str);
char* q_dequeue(queue* q);
char* q_peek(queue* q);
int q_empty(queue* q);
size_t q_count(queue* q);

#endif

