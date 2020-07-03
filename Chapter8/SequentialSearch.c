#include <stdio.h>
#include <stdlib.h>

int Squential_Search(int *a,int n,int key)
{
    int i;
    for(i=1;i<n;i++)
    {
        if (a[i]=key)
        {
            return i;
        }
        return 0;
    }
}

//优化，复杂度O[n]
int Squential_Search2(int *a,int n,int key) 
{
    int i;
    a[0]=key;
    i=n;
    while(a[i]!=key)
    {
        i--;
    }
    return i;
}