/* C Program to Find Factorial of a Number */
#include <stdio.h>
void main()
 {
  int i, num; 
  long Factorial = 1;
 
  printf("\n Enter any number to Find Factorial:\n");
  scanf("%d", &num);
 
  for (i = 1; i <= num; i++)
   {
     Factorial = Factorial * i;
   }
 
  printf("\nFactorial of %d = %d\n", num, Factorial);
 
 }
