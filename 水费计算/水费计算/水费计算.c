#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double tons = 0;
	double a = 0;
	printf("����������˶���ˮ��\n");
	scanf("%lf", &tons);
	if (tons <= 0)
	{
		printf("������µ�ˮ����0Ԫ");
	}
	else if (0 < tons && tons <= 15)
	{
		a = (4 * tons) / 3;
	}
	else
	{
		a = 2.5 * tons - 10.5;
	}
		printf("������µ�ˮ����%lfԪ", a);	
		return 0;
}