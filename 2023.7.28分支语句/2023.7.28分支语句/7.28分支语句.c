#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("请输入一个年龄\n");
//	int age = 0;
//	scanf("%d", &age);
//	if (0 < age && age < 18)
//	{
//		printf("这是一个未成年人\n");
//	}
//	else if (18 < age && age < 60)
//	{
//		printf("这是一个成年人\n");
//	}
//	else if (60 <= age && age <= 120)
//	{
//		printf("这是一个老年人\n");
//	}
//	else
//	{
//		printf("这是一个仙人\n");
//	}
//	int a = 10;
//	if (10 == a);//习惯把常量放在前面增强可读性
//	printf("一个10");
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (0 == num % 2)
//	{
//		printf("这是一个偶数");
//	}
//	else
//		printf("这是一个奇数");
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	while (num <= 100)
//	{
//		if (0 == num % 2)
//		{
//			num++;
//		}
//		else
//		{
//			printf("%d\n", num);
//			num++;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	}
//	return 0;
//}

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:		
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日");
		break;
	case 6:
	case 7:
		printf("休息日");
		break;
	default:
		printf("你输入的数太大了");
		break;
	}
	return 0;
}