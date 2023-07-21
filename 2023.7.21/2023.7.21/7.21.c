#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//两种注释方法
//int b
/*
* int b =190
*/

int main()
{//选择语句
	int input = 0;
	printf("太阳只有一个，如果是，请输入“1”，如果不是请输入“2”");
	scanf("%d", &input);
	if (input == 1)//=是赋值，==是等于
		printf("恭喜你，你是一个正常人！");
	else
		printf("你的智商可能不在正常水平");
//循环语句
	int line = 0;
	while (line <= 30000)
	{
		printf("写代码！！:%d\n",line);
		line++;
	}
	if (line == 30001)
	{
		printf("成为代码大师\n");

	}
	return 0;
}
