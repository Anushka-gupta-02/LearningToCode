#include<stdio.h>
enum  color{SAFFRON, WHITE,GREEN
};
int main ()
{

int color;
	printf("Enter color(0-2): ");
	scanf("%d",&color);
	if(color==SAFFRON)
	printf("saffron");
	if(color==WHITE)
	printf("white");
	if(color==GREEN)
	printf("green");
	else
{
		
printf("invalid color \n");}
	return 0;
}
