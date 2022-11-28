//with return type with parameters
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	
	printf("\nAddition  :  %d",add(a,b));
}
int add(int c, int d)
{
	int ans;
	ans = c + d;
	return ans;
}