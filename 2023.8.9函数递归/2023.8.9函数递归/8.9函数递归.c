#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
//void maxy(int a)
//{
//	if (a > 9)
//	{
//		maxy(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	maxy(a);
//	return 0;
//}
//Feb(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return (Feb(n - 2) + Feb(n - 1));
//	
//}
Feb(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", Feb(n));
	return 0;
}