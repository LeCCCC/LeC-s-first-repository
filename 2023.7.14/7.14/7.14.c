#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;
int b = 125;
//这个括号外的叫全局变量，括号里的都叫局部变量，这俩冲突时局部变量优先
int main()
{
		//描述楽C的身高体重
		int height = 181;
	    float weight = 165.5;

		//创建变量
		//变量类型 名字 = 值;
		//改变变量如下
		height = height+10;
		weight = weight - 20;
		printf("%d\n",height);
		printf("%f\n", weight);
		//写代码求和
		int C = 0;
		int D = 0;
		int sum = 0;
		scanf("%d %d", &C, &D);
		sum = C + D;
		printf("sum = %d\n", sum);

		return 0;
}