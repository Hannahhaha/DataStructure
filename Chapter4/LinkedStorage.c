
#include <stdio.h>
#include <stdlib.h>
#define ERROR -1
#define OK 1
#define MAX 10

#define MAXSIZE 20 
typedef struct StackNode
{
    int data;
    struct StackNode *next;
}StackNode,*LinkStackPtr;

typedef struct LinkStack
{
    LinkStackPtr top;
    int count;
}LinkStack;

//进栈
int Push (LinkStack *S, int e)
{
    LinkStackPtr s=(LinkStackPtr)malloc(sizeof(StackNode));
    s->data=e;
    s->next=S->top;
    S->top=s;
    S->count++;
    return OK;
}

//删除
int Pop(LinkStack *S, int *e)
{
    LinkStackPtr p;
    if(StackEmpty(*S))
        return ERROR;
    *e=S->top->data;
    p=S->top;
    S->top=S->top->next;
    free(p);
    S->count--;
    return OK;
}

