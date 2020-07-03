 # include"stdio.h"
#include <stdio.h>
#include <stdlib.h>
#define ERROR -1
#define OK 1
#define MAX 10

typedef int QElemType;

typedef struct QNode
{
    int data;
    struct QNode *next;
}QNode,*QueuePtr;

typedef struct 
{
    QueuePtr front ,rear;
}LinkQueue;

int EnQueue(LinkQueue *Q,int e)
{
    QueuePtr s=(QueuePtr)malloc(sizeof(QNode));
    if(!s)
        exit(0);
    s->data=e;
    s->data=NULL;
    Q->rear->next=s;

    Q->rear=s;
    return OK;
}

int DeQueue (LinkQueue *Q, int *e)
{
    QueuePtr p;
    if(Q->front==Q->rear)
        return ERROR;
    p=Q->front->next;
    *e=p->data;
    Q->front->next =p->next;

    if(Q->rear==p)
        Q->rear=Q->front;
    free(p);
    return OK;
}

