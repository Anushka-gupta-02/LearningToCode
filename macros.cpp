#include<stdio.h>
#define MIN(a,b)(a<b?a:b)
#define MAX(a,b)(a>b?a:b)
int main()
{
	int x,y,z;
	printf("Enter value of x and y: ");
	scanf("%d  %d",&x,&y);
	printf("Max of two: %d\n",MAX(x,y));
	printf("Min of two: %d\n",MIN(x,y));
	return 0;
}
