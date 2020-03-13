/* c program to find sum of AP GP and HP */
#include<stdio.h>
#include<math.h>
void main()
  {
    int k;
    float a, d, n, sum=0, r;
    printf("1.AP\n 2.GP\n 3.HP");
    printf('\n Enter your choice:");
    scanf("%d",&k);
    switch(k)
      {
        case 1 : printf("\n Enter first term, common difference, and number of terms:");
                 scanf("%f%f%f",&a,&d,&n);
                 sum=(n/2)*(2*a+(n-1)*d);
                 printf("\n The sum of %f terms in AP=%f",n,sum);
                 break;
        case 2 : printf("\n Enter first term, common ratio and total number of terms:");
                 scanf("%f%f%f",&a,&r,&n);
                 if(r>1)
                   sum=(a*(pow(r,n)-1))/r-1;
                 else
                   sum=(a*(1-pow(r,n)))/(1-r);
                 printf("\n The sum of %f terms in GP=%f",n,sum);
                 break;
        case 3 : printf("\n Enter the total number of terms:");
                 scanf("%f",&n);
                 for(int i=0;i<=n;i++)
                    {
                      sum+=(1/i);
                    }
                 printf("\n The sum of %f terms in HP =%f",n,sum);
                 break;
        default : printf("\n****ERROR****");
      }
  }
