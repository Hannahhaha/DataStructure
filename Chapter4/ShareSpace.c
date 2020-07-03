#include <stdio.h>
#include <stdlib.h>
#define ERROR -1
#define OK 1
#define MAXSIZE 20 

//两栈共享空间结构
typedef struct 
{
    int data[MAXSIZE];
    int top1;
    int top2;
}SqDoubleStack;

//插入
int Push(SqDoubleStack *S, int e, int stackNumber)
{
    if(S->top1+1==S->top2)
        return ERROR;
    if(stackNumber==1)
        S->data[++S->top1]=e;
    else if (stackNumber==2)
        S->data[--S->top2]=e;
    return OK;    
}

//POP
int  Pop(SqDoubleStack *S,int *e,int stackNumber)
{
    if (stackNumber==1)
    {
        if(S->top1==-1)
            return ERROR;
        e=S->data[S->top1--];
    }
    else if (stackNumber==2)
    {
        if(S->top2==MAXSIZE)
            return ERROR;
        *e=S->data[S->top2++];
    }
    return OK;
}