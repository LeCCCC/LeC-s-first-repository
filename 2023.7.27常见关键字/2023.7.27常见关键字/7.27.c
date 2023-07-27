#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef unsigned int u_int;
//extern int g_val;
extern Add(int x ,int y);
void test()
{
	static int a = 0;
	a++;
	printf("%d\n", a);
}
int main()
{
	u_int a = 0;
	printf("%d\n", a);
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	/*int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	int sum = Add(x, y);
	printf("sum=%d\n", sum);*/
	//printf("%d\n", g_val);
	return 0;
}