#include <stdio.h>
#include <stdlib.h>

int Fibonacci_Search(int *a,int n,int key)
{ 
    int low, high, mid, i, k;
    low=1;
    high=n;
    k=0;

    while(n>Fib[k]-1)
         k++;
    for (int n;i<Fib[k]-1;i++)
         a[i]=a[n];
         
    while (low<=high)
    {
        mid=low+Fib[k-1]-1;
        if(key<a[mid])
        {
            high=mid-1;
            k=k-1;
        }
        else if (key>a[mid])
        {
            low=mid+1;
            k=k-2;
        }
        else
        {
            if(mid<=n)
                return mid;
            else 
                return n;
        } 
    }
    return 0;    
}
