/* c program to calculate area of triangle, right angled triangle, trapezium,rhombus,parallelogram */
#include<stdio.h>
void main()
  {
    float a, b, h, d1, d2, area1, area2, area3, area4;
    printf("\n Enter values for a,b,h,d1,d2:");
    scanf("%f%f%f%f%f",&a,&b,&h,&d1,&d2);
    area1= (1/2)*b*h;
    area2= (1/2)*h*(a+b);
    area3= (1/2)*d1*d2;
    area4= b*h;
    printf("\n Area of triangle and right angled triangle is:%f",area1);
    printf("\n Area of trapezium is:%f",area2);
    printf("\n Area of rhombus is:%f",area3);
    printf("\n Area of parallelogram is:%f",area4);
  }
