#include <stdio.h>
#include <stdlib.h>
#define ERROR -1
#define OK 1
#define MAXSIZE 20 

typedef int QElemType;
typedef struct 
{
    QElemType data[MAXSIZE];
    int front;
    int rear;
}SqQueue;
int InitQueue(SqQueue *Q)
{
    Q->front=0;
    Q->rear=0;
    return OK;
}

int QueueLength(SqQueue Q)
{
    return (Q.rear-Q.front+MAXSIZE)%MAXSIZE;
}

int EnQueue(SqQueue *Q,int e)
{
    if((Q->rear+1) %MAXSIZE == Q->front)
        return ERROR;
    Q->data[Q->rear]=e;
    Q->rear=(Q->rear+1)%MAXSIZE;

    return OK;
}

int DeQueue (SqQueue *Q,int *e)
{
    if(Q->front==Q->rear)
        return ERROR;
    *e=Q->data[Q->front];
    Q->front=(Q->front +1)%MAXSIZE;

    return OK;
}
