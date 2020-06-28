//两栈共享空间结构
typedef struct 
{
    SElemType data[MAXSIZE];
    int top1;
    int top2;
}SqDoubleStack;

//插入
Status Push(SqDoubleStack *S, SElemType e, int stackNumber)
{
    if(s->top1+1==s->top2)
        return ERROR;
    if(stackNumber==1)
        S->data[++S->top1]=e;
    else if (stackNumber==2)
        S->data[--S->top2]=e;
    return OK;    
}

//POP
Status Pop(SqDoubleStack *S,SElemType *e,int stackNumber)
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