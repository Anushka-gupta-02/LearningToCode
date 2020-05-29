#include<stdio.h>
void add(int a, int b);
void multiply(int a, int b);
int main ()
{
	void (*p)(int, int);
	int x,y,option;
	printf("Enter values: ");
	scanf("%d %d",&x,&y);
	printf("Add(1) or multiply(2): ");
	scanf("%d",option);
	if(option==1)
	p=add;
	else if(option==2)
	p=multiply;
	else
	{printf("invalid option");
	p=0;}
	if(p)
	(*p)(x,y);
	return 0;
}
void add(int a, int b)
{
	printf("sum=%d\n",a+b);
}
void multiply(int a, int b)
{
	printf("sum=%d\n",a*b);
}
