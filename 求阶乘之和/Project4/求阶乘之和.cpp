#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 1;
	int ret = 1;
	int sum = 0;
	int b = 0;
	scanf("%d", &b);
	for (ret = 1; a <= b; a++)
	{
		ret *= a;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}