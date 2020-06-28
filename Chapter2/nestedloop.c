# include "stdio.h"
int main()
{
 int i,j, x=0, sum=0,n=100;
 for(i=1; i<=n; i++)
 {
     for(j=1; j<=n; j++)
     {
         x++;   //1+2+3+...+10000
         sum = sum + x;
     }
 }
 printf("%d",sum);
 return 0;
} 