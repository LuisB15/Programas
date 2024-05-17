#include "list.h"

list* l_new(void){
	return(list*)calloc(1,sizeof(list));
}

lnode* l_at(list* l, int i){
	if(!l)return NULL;
	if(i==l->count-1)return l->last;
	lnode* n=l->first;
	while(i--&&n)
		n=n->next;
	return n;
}

int l_append(list* l, int v){
	l_insert(l,l->count,v);
	return 0;
}

int l_insert(list* l, int i, int v){
	if(!l)return -1;
	lnode* nn=(lnode*)malloc(sizeof(lnode));
	nn->v=v;
	if(i==0){
		nn->next=l->first;
		l->first=nn;
		if(!l->last)l->last=nn;
		}else{
			if(i>l->count)i=l->count;
			lnode* n=l_at(l,i-1);
			nn->next=n->next;
			n->next=nn;
			}
			++l->count;
	return 0;
}

int l_delete(list* l, int i){
	if(!l||i>=l->count)return -1;
	lnode* tmp;
	if(i==0){
		tmp=l->first;
		l->first=l->first->next;
		if(!l->first)l->last=NULL;
		}else{
			lnode* n=l_at(l,i-1);
			tmp=n->next;
			n->next=n->next->next;
			if(i==l->count-1)l->last=n;
			}
			free(tmp);
			--l->count;
	return 0;
}

int l_get(list* l, int i){
	if(!l)return 0;		
	lnode*n=l_at(l,i);
	if(!n)return 0;
	return n->v;
}

int l_set(list* l, int i, int v){
	if(!l)return 0;
	lnode* n=l_at(l,i);
	if(!n)return 0;
	n->v=v;
	return 0;
}

int l_empty(list* l){
	return l->count ==0;
}

size_t l_count(list* l){
	return l->count;
	
}

