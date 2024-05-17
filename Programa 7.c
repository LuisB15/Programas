#include "queue.h"



queue* q_new(void){
    return (queue*)calloc(1,sizeof(queue));
}

void q_enqueue(queue* q, char* str){
    if(!q) return;
    qnode* nn=(qnode*)malloc(sizeof(qnode));
    nn->value=str;
    nn->next=NULL;
    if (q->tail) {
        q->tail->next=nn;
    }
    else
        q->head=nn;
    q->tail=nn;
    ++q->count;
    
}

char* q_dequeue(queue* q){
    if(!q||!q->head)return NULL;
    qnode*tmp=q->head;
    char* value =q->head->value;
    q->head=q->head->next;
    if(!q->head)
        q->tail=NULL;
    free(tmp);
    --q->count;
    
    return value;
}
char* q_peek(queue* q){
    if(!q||!q->head)
        return NULL;
    return q->head->value;
    
}
int q_empty(queue* q){

    return !q->count;
}

size_t q_count(queue* q){
   
    return q->count;
}

