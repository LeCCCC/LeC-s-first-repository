#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
void menu()//����˵�����
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
	int ran = rand()%101;//rand�᷵��һ��0~32767�������//%101�Ļ����������ֻ����0~100֮�䣬���ڵ���101���λ
	//printf("%d\n", ran);
	int guess = 0;
	printf("�������\n");
	while (1)
	{
		scanf("%d", &guess);
		if (guess < ran)
			printf("���С��\n");
		else if (guess > ran)
			printf("��´���\n");
		else
		{
			printf("��ϲ��¶��ˣ�\n");
			break;
		}
	}

}
int main()
{
	srand((unsigned int)time(NULL));//time�᷵��һ��ʱ���//srand�൱�ڸ�randһ�����ӣ��Դ�������������˴���ʱ���Ϊ���ӱ�֤ÿ������ʱ���Ӳ�ͬ���������������Ǳ�֤ÿ�γ�������ʱֻ��ͬһ�����ӡ�
	
	int input;
	do
	{
		menu();//ִ�д�ӡ�˵��ĺ���
		printf("��ѡ��\n");
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
			printf("�˳���Ϸ");
			break;
		}
		default:
		{
			printf("���ٴ�ѡ��");
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
	//	printf("����������\n");
	//	scanf("%s", pswd);

	//	if (strcmp(pswd,"123456") == 0)//strcmp�������ڱȽ������ַ��������ݣ������ͬ�򷵻�0,�Ƚϵ����ַ�����Ӧλ�����ASCIIֵ
	//	{
	//		printf("��½�ɹ�");
	//		break;
	//	}
	//	else
	//	{
	//		system("cls");
	//		printf("�������x%d��\n",i);
	//	}
	//}
	//if (i == 6)
	//{
	//	printf("�������������࣬���Ժ�����");
	//}
	return 0;
}