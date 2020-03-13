/* C Program to Calculate Simple Interest */
#include<stdio.h>
void main() 
   {
     float P,R,T,s;
 
     printf("\n Enter the Principal Amount : \n");
     scanf("%f",&P);
 
     printf("\n Enter Rate Of Interest : \n");
     scanf("%f",&R);
 
     printf("\n Enter the Time Period in Years : \n");
     scanf("%f",&T);
 
     s=(P*R*T)/100;
     printf("\n Simple Interest for Principal Amount %.2f is = %.2f",P,s);
   } 
