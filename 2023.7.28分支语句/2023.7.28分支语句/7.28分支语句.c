#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("������һ������\n");
//	int age = 0;
//	scanf("%d", &age);
//	if (0 < age && age < 18)
//	{
//		printf("����һ��δ������\n");
//	}
//	else if (18 < age && age < 60)
//	{
//		printf("����һ��������\n");
//	}
//	else if (60 <= age && age <= 120)
//	{
//		printf("����һ��������\n");
//	}
//	else
//	{
//		printf("����һ������\n");
//	}
//	int a = 10;
//	if (10 == a);//ϰ�߰ѳ�������ǰ����ǿ�ɶ���
//	printf("һ��10");
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (0 == num % 2)
//	{
//		printf("����һ��ż��");
//	}
//	else
//		printf("����һ������");
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
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
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
		printf("������");
		break;
	case 6:
	case 7:
		printf("��Ϣ��");
		break;
	default:
		printf("���������̫����");
		break;
	}
	return 0;
}