#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
void menu()//定义菜单函数
{
	printf("****************************\n");
	printf("********  1.Play  **********\n");
	printf("****************************\n");
	printf("********  0.Exit  **********\n");
	printf("****************************\n");
	printf("****************************\n");
}
void game()
{
	int ran = rand()%101;//rand会返回一个0~32767的随机数//%101的话，除余的数只能在0~100之间，大于等于101会进位
	//printf("%d\n", ran);
	int guess = 0;
	printf("请猜数字\n");
	while (1)
	{
		scanf("%d", &guess);
		if (guess < ran)
			printf("你猜小了\n");
		else if (guess > ran)
			printf("你猜大了\n");
		else
		{
			printf("恭喜你猜对了！\n");
			break;
		}
	}

}
int main()
{
	srand((unsigned int)time(NULL));//time会返回一个时间戳//srand相当于给rand一个种子，以此生成随机数，此处用时间戳为种子保证每次启动时种子不同。放在主函数下是保证每次程序启动时只有同一个种子。
	
	int input;
	do
	{
		menu();//执行打印菜单的函数
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("退出游戏");
			break;
		}
		default:
		{
			printf("请再次选择！");
			break;
		}
		}
	} while (input);
	//char arr1[] = { "I Love You Very Much!" };
	//char arr2[] = { "#####################" };
	//int left = 0;
	//int right = strlen(arr1) - 1;
	//for (; left <= right; left++, right--)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	Sleep(500);
	//	system("cls");
	//	printf("%s\n", arr2);
	//}
	//int i = 1;
	//char pswd[20] = { 0 };
	//for (; i <= 5; i++)
	//{
	//	printf("请输入密码\n");
	//	scanf("%s", pswd);

	//	if (strcmp(pswd,"123456") == 0)//strcmp函数用于比较两个字符串的内容，如果相同则返回0,比较的是字符串对应位置里的ASCII值
	//	{
	//		printf("登陆成功");
	//		break;
	//	}
	//	else
	//	{
	//		system("cls");
	//		printf("密码错误x%d！\n",i);
	//	}
	//}
	//if (i == 6)
	//{
	//	printf("密码输入错误过多，请稍后再试");
	//}
	return 0;
}