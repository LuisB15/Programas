#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

struct stlnode{
	int v;
	struct stlnode* next;
}typedef lnode;
struct{
	lnode* first;
	lnode* last;
	size_t count;
	void* p;
} typedef list;

list* l_new(void);
lnode* l_at(list* l, int v);
int l_append(list* l, int v);
int l_insert(list* l, int i, int v);
int l_delete(list* l, int i);
int l_get(list* l, int i);
int l_set(list* l, int i, int v);
int l_empty(list* l);
size_t l_count(list* l);

#endif
