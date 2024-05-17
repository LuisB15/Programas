#include "stack.h"

stack* s_new(void){
	return(stack*)calloc(1,sizeof(stack));
}

void s_push(stack* s, int value){
	if(!s) return;
	snode *nn=(snode*)malloc(sizeof(snode));
	nn -> value = value;
	nn->next=s->top;
	s->top=nn;
	++s->count;
}

int s_pop(stack* s){
	if(!s||!s->top)return 0;
	snode*tmp=s->top;
	int v=s->top->value;
	s->top=s->top->next;
	free(tmp);
	--s->count;
	return v;
	
}

int s_peek(stack* s){
	if(!s || !s -> top){
        return 0;
	}
	return s->top->value;
}
int s_empty(stack* s){
	return !s->top;
}

size_t s_count(stack* s){
	return s->count;
}
