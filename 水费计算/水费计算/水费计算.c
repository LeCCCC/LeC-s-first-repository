#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double tons = 0;
	double a = 0;
	printf("你这个月用了多少水？\n");
	scanf("%lf", &tons);
	if (tons <= 0)
	{
		printf("您这个月的水费是0元");
	}
	else if (0 < tons && tons <= 15)
	{
		a = (4 * tons) / 3;
	}
	else
	{
		a = 2.5 * tons - 10.5;
	}
		printf("您这个月的水费是%lf元", a);	
		return 0;
}