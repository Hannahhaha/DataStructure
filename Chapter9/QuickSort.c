#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
#define MAX_LENGTH_INSERT_SORT 7
typedef struct 
{
    int r[MAXSIZE+1];
    int length;
}SqList;

void swap(SqList *L,int i,int j)
{
    int temp=L->r[i];
    L->r[i]=L->r[j];
    L->r[j]=temp;
}

void QSort(SqList *L,int low,int high)
{
    int pivot;
    if(low<high)
    {
        pivot=Partition(L,low,high);

        QSort(L,low,pivot-1);
        QSort(L,pivot+1,high);
    }
}

void QSort1(SqList *L,int low,int high)
{
    int pivot;
    if((high-low)>MAX_LENGTH_INSERT_SORT)
    {
        pivot=Partition(L,low,high);

        QSort(L,low,pivot-1);
        QSort(L,pivot+1,high);
    }
    else 
        InsertSort(L);
}

void QSort2(SqList *L,int low,int high)
{
    int pivot;
    if((high-low)>MAX_LENGTH_INSERT_SORT)
    {
        while(low<high)
       {
        pivot=Partition(L,low,high);

        QSort(L,low,pivot-1);
        low=pivot+1;
        } 
    }
    else 
        InsertSort(L);
}

int Partion(SqList *L,int low,int high)
{
    int pivotkey;
    pivotkey=L->r[low];
    while(low<high)
    {
        while(low<high&&L->r[high]>=pivotkey)
            high--;
        swap(L,low,high);
        while(low<high&&L->r[low]<=pivotkey)
            low++;
        swap(L,low,high);
    }
    return low;
}

int Partion1(SqList *L,int low,int high)
{
    int pivotkey;
    int m=low+(high-low);
    if(L->r[low]>L->r[high])
        swap(L,low,high);
    if(L->r[m]>L->r[high])
        swap(L,high,m);
    if(L->r[m]>L->r[low])
        swap(L,m,low);
    pivotkey=L->r[low];
    while(low<high)
    {
        while(low<high&&L->r[high]>=pivotkey)
            high--;
        swap(L,low,high);
        while(low<high&&L->r[low]<=pivotkey)
            low++;
        swap(L,low,high);
    }
    return low;
}

int Partion2(SqList *L,int low,int high)
{
    int pivotkey;
    int m=low+(high-low);
    if(L->r[low]>L->r[high])
        swap(L,low,high);
    if(L->r[m]>L->r[high])
        swap(L,high,m);
    if(L->r[m]>L->r[low])
        swap(L,m,low);
    pivotkey=L->r[low];

    L->r[0]=pivotkey;

    while(low<high)
    {
        while(low<high&&L->r[high]>=pivotkey)
            high--;
        L->r[low]=L->r[high];
        while(low<high&&L->r[low]<=pivotkey)
            low++;
        L->r[high]=L->r[low];
    }
    L->r[low]=L->r[0];
    return low;
}