#include<stdio.h>
main()
{
	int n,r,h;
	printf("Select The Shape To Find Area :");
	printf("\n1, Circle \n2, Triangle \n3, Rectangle Or Square\n\n");
	scanf("%d", &n);
	
	switch(n)
	{
		    case 1:
			    printf(" \nEnter The Radius Of Circle: ");
			    scanf("%d", &r);
			    printf("\nArea Of Circle :  %f",3.14*r*r);
			    break;
			
			case 2:
			    printf(" \nEnter The Base Of Triangle: ");
			    scanf("%d", &r);
			    printf("\nEnter Height Of Triangle :  ");
		        scanf("%d", &h);	
		        printf("\nArea Of Triangle :  %f",0.5*r*h);
			    break;
			
			case 3:
		        printf("\nEnter Height  :");
		        scanf("%d", &r);
		        printf("\nEnter Width");
		        scanf("%d", &h);
		        printf("\nArea Of Rectangle :  %d",r*h);
		    break;
		
		default:
			printf("\nINVALID INPUT!!");
	}
}