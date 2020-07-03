#include <stdio.h>
#include <stdlib.h>
#define ERROR -1
#define OK 1
#define MAXSIZE 20 

//栈的结构定义
typedef int SElemType;
typedef struct 
{
    int data[MAXSIZE];
    int top;
}SqStack;

//进栈
int Push(SqStack *S,int e)
{
    if(S->top==MAXSIZE-1)
    {
        return ERROR;
    }
    S->top++;
    S->data[S->top]=e;
    return OK;
}

//出栈
int Pop(SqStack *S,int *e)
{
    if(S->top==-1)
        return ERROR;
    *e=S->data[S->top];
    S->top--;
    return OK;
}

