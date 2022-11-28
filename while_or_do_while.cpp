#include<stdio.h>
main()
{
   int n,s,i=0;
   printf("How many items you want to add? ");
   scanf("%d,&s");
   int numbers[s];
   
   while(i<s)
   {
   	printf("Add value %d: *,i+1");
   	scanf("%d", &n);
   	i++;
   	numbers[i] = n;
   }
}