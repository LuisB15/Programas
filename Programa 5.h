#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

struct snode{
	int value;
	struct snode* next;
}typedef snode;
struct{
	snode*top;
	size_t count;
} typedef stack;

stack* s_new(void);
void s_push(stack* s, int value);
int s_pop(stack* s);
int s_peek(stack* s);
int s_empty(stack* s);
size_t s_count(stack* s);

#endif
