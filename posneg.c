#include<stdio.h>
int main()
{
	int a;
	printf("enter a number\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is postive number\n",a);
	}
	else if(a==0)
	 {
	 	printf("%d is neither positive nor negative\n",a);
     }
	else
	{
		printf("%d is negative number\n",a);
	}	 
	printf("thank you\n");
}
