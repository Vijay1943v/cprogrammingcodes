#include<stdio.h>

void add();//declaration
main()
{
add();//calling
add();//calling
add();//calling
return 0;
}
void add()
{
int a,b;
printf("Enter two numbers: ");
scanf("%d",&a);
scanf("%d",&b);
printf("The Sum is %d\n",a+b);
}
