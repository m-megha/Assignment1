/* c program to display Floyd's triangle */
#include <stdio.h>
void main()
 {
    int rows, i, c, a = 1;
    
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++)
     {
        for (c = 1; c <= i; c++)
         {        
            printf("%d ",a);
            a++; 
         }
        printf("\n");
     }
    
 }
