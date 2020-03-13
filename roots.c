/* C Program to find roots of a Quadratic Equation */
#include <stdio.h>
#include<math.h>
void main()
  {
	  float a, b, c;
	  float m1,m2,imaginary,discriminant;
	
	  printf("\n Enter values of a, b, c of Equation:");
  	scanf("%f%f%f", &a, &b, &c);
  	
  	discriminant = (b * b) - (4 * a *c);
  	
  	if(discriminant > 0)
  	  {
  	     m1= (-b+sqrt(discriminant)/(2*a));
  	     m2= (-b-sqrt(discriminant)/(2*a));
	     printf("\n Two Distinct Real Roots Exists:m1 = %.2f and m2 = %.2f",m1,m2);
  	  }
  	else if(discriminant == 0)
  	  {
  	     m1=m2= -b/(2*a);
  	     printf("\n Two Equal and Real Roots Exists:m1 = %.2f and m2 = %.2f",m1,m2);
  	  }
  	else if(discriminant < 0)
  	  {
  	     m1=m2= -b/(2*a);
  	     imaginary=sqrt(-discriminant)/(2*a);
  	     printf("\n Two Distinct Complex Roots Exists:m1 = %.2f+%.2f and m2 = %.2f-%.2f",m1,imaginary,m2,imaginary);
  	  }
	
  	
   }
