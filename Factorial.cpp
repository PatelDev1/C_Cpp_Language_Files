#include<stdio.h>
int fact(int n)
{
   int fa=1;
   if(n == 1)
   {
      return 1;	
   }	
   else
   {
   	fa = n * fact(n-1);
   }
   return fa;
} 
main()
{
	int n;
	
	printf("Enter A Number To Find Factorial : ");
	scanf("%d",&n);
	
	printf("\nFactorial : %d",fact(n));
}