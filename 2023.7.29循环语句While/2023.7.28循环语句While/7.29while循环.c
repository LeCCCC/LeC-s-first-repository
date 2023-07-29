#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//int a = 0;
	//while (a <= 10)
	//{
	//	if (5 == a)
	//		break;
	//	printf("%d\n", a);
	//	a++;
	//}
	//int ch = 0;
	//while ((ch = getchar()) != EOF)//如果放在ch里的值不是EOF，就执行下面的语句
	//	putchar(ch);
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}