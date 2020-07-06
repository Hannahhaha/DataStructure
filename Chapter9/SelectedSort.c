#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10

typedef struct 
{
    int r[MAXSIZE+1];
    int length;
}SqList;

//O[n2]
void select(SqList *L)
{
    int i,j,min;
    for(i=1;i<L->length;i++)
    {
        min =i;
        for(j=i;j<-L->length;j++)
        {
            if(L->r[min]>L->r[j])
                 min=j;
        }
        if (i!=min)
            swap(L,i,min);
    }
}