/* c program to calculate the value of sin(x) and cos(x) */
#include<stdio.h>
#include<math.h>
void main()
   {
     float sinvalue,cosvalue,x;
     
     printf("\n Enter the value:");
     scanf("%f",&x);
     
     sinvalue=sin(x);
     cosvalue=cos(x);
     
     printf("\n The sin value of %f=%f",x,sinvalue);
     printf("\n The cosine value of %f=%f",x,cosvalue);
   }
