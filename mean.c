/* C program to calculate the mean, variance and standard deviation */
#include <stdio.h>
#include <math.h>
void main()
 {
    float x[10];
    int  i, num;
    float mean, variance, std_deviation, sum = 0, sum1 = 0;
 
    printf("Enter the value of N:\n");
    scanf("%d", &num);
    printf("Enter %d real numbers:\n",num);
    for (i = 0; i < num; i++)
     {
       scanf("%f", &x[i]);
     }
    /*  Compute the sum */
    for (i = 0; i < num; i++)
     {
       sum = sum + x[i];
     }
    mean = sum/(float)num;
    /*  Compute  variance  and standard deviation  */
    for (i = 0; i < n; i++)
     {
       sum1 = sum1 + pow((x[i] - mean),2);
     }
    variance = sum1/(float)num;
    std_deviation = sqrt(variance);
    printf("mean of all elements = %.2f\n", mean);
    printf("variance of all elements = %.2f\n", variance);
    printf("Standard deviation = %.2f\n", std_deviation);
 }
