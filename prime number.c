/* C Program to Print Prime Numbers in a given range */
#include <stdio.h>
void main()
 {
  int i, num, count, min , max;
  printf("\n Enter values for range:");
  scanf("%d%d",&min,&max); 
  
  printf(" Prime Numbers from %d to %d are: \n",min,max); 
  for(num = min; num <= max; num++)
   {
    count = 0;
    for (i = 2; i <= num/2; i++)
      {
  	    if(num%i == 0)
  	     {
     	    count++;
  	      break;
	       }
      }
    if(count == 0 && num != 1 )
      {
	      printf(" %d ", num);
      }  
   }
  
 }
