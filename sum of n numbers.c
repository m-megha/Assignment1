/* c program to find sum of first n natural numbers */
#include <stdio.h>
void main() 
 {
   int n = 4;
   int sum=0, s=0;
   for(int i = 1; i< n; i++)
     {
       for(int j= 1; j<i;j++ )
         {
           s+= j;
         }
       sum += s;
     }
   printf("the sum of sum of natural number till %d is %d", n,sum);
   
 }
