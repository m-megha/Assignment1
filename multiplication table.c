/* c program to find and display multiplication table */
#include <stdio.h>
void main() 
 {
    int num, i = 1;
    printf("\n Enter any Number:");
    scanf("%d", &num);
    printf("Multiplication table of %d:\n ", num);
    
    while (i <= 10) 
     {
        printf(" %d x %d = %d", num, i, num * i);
        i++;
     }
 }
