/* c program to compute the surface area and volume of cube,cylinder,cuboid,cone,sphere */                    
#include<stdio.h>
#include<math.h>
#define pi 3.14
void main()
  {
    float a, r, h,b,l,s1,s2,s3,s4,s5,v1,v2,v3,v4,v5;
    printf("\n Enter values for parameters:");
    scanf("%f%f%f%f%f",&a,&r,&h,&b,&l);
    s1=6*a*a;
    s2=2*pi*r*(r+h);
    s3=2*((l*b)+(b*h)+(l*h));
    s4=pi*r*(r+sqrt((h*h)+(r*r)));
    s5=4*pi*r*r;
    v1=a*a*a;
    v2=pi*r*r*h;
    v3=l*b*h;
    v4=(1/3)*pi*r*r*h;
    v5=(4/3)*pi*r*r*r;
    printf("\n Surface area and volume of cube are:%f and %f",s1,v1);
    printf("\n Surface area and volume of cylinder are: %f and %f",s2,v2);
    printf("\n Surface area and volume of cuboid are: %f and %f", s3,v3);
    printf("\n Surface area and volume of cone are: %f and %f", s4,v4);
    printf("\n Surface area and volume of sphere are: %f and %f", s5,v5);
  }
    
