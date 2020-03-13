/* C program to generate Fibonacci series */
#include <stdio.h>
void main()
  {
    int n,i=0,Next,First_Value=0,Second_Value=1;

    printf("\n Enter the Range Number:");
    scanf("%d",&n);
  
    while(i < Number) 
      {
  	    if(i <= 1)
  	      {
  	        Next = i;
	        }
	      else
	        {
	          Next = First_Value + Second_Value;
	          First_Value = Second_Value;
	          Second_Value = Next;
	        }
       printf("%d \t", Next);
   	   i++;  
     }
  
  }
