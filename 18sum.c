/* C Program to find the Sum of Series 1 + 1/2 + 1/3 + 1/4 +...+ 1/N */
#include <stdio.h>
void main()
 {
    float num, sum = 0, i;
 
    printf("\n enter the number:");
    scanf("%f", &num);
    for (i = 1; i <= num; i++)
       {
        sum = sum + (1 / i);
        if (i == 1)
            printf("\n 1 +");
        else if (i == num)
            printf(" (1 / %lf)", i);
        else
            printf(" (1 / %lf) + ", i);
       }
    printf("\n The sum of the given series is %.2f", sum);
 }
