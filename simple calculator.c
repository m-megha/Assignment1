/* C Program to Create Simple Calculator */
#include <stdio.h>
void main()
   {
      char Operator;
      float num1,num2,result=0;
	
      printf("\n Enter an Operator (+, -, *, /):");
      scanf("%c",&Operator);
  	
      printf("\n Enter the Values for two Operands: num1 and num2:");
      scanf("%f%f", &num1, &num2);
  	
      switch(Operator)
  	     {
  	       case '+':
  		        result = num1 + num2;
  		        break;
  	       case '-':
  		        result = num1 - num2;
  		        break;  			
  	       case '*':
  		        result = num1 * num2;
  		        break;
  	       case '/':
  		        result = num1 / num2;
  		        break;
	         default:
		          printf("\n Invalid Operator ");				    			
	       }
  
      printf("\n The result of %.2f %c %.2f  = %.2f",num1,Operator,num2,result);
	
    }
