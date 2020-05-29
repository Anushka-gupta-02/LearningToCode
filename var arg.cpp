#include<stdio.h>
#include<stdarg.h>
void add(int count, ...);


int main()
{
	add(3,4,5,6); //here 3 is no. of arguments.
	add(5,8,9,1,2,8); //here 5 is no. of arguments.
	return 0;
}

void add(int count, ...)
{
	int i;
	int sum=0;
	int num;
	va_list list;
	va_start(list, count);
	for(i=count;i!=0;i--)
	{
		num=va_arg(list,int);
		printf("%d\n",num);
		sum+=num;
	}
	printf("Total=%d\n",sum);
}
