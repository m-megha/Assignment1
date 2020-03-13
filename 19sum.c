/* c program to find sum of the series 1/1! + 2/2! + ... + 1/n! */
#include<stdio.h>
void main()
  {
    int n, i, sum=0, fact=1;
    printf("\n Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
       {
         fact*=i;
         sum+=i/fact;
       }
     printf("\n Sum of series:%d",sum);
   }
