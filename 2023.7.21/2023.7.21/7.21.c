#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����ע�ͷ���
//int b
/*
* int b =190
*/

int main()
{//ѡ�����
	int input = 0;
	printf("̫��ֻ��һ��������ǣ������롰1����������������롰2��");
	scanf("%d", &input);
	if (input == 1)//=�Ǹ�ֵ��==�ǵ���
		printf("��ϲ�㣬����һ�������ˣ�");
	else
		printf("������̿��ܲ�������ˮƽ");
//ѭ�����
	int line = 0;
	while (line <= 30000)
	{
		printf("д���룡��:%d\n",line);
		line++;
	}
	if (line == 30001)
	{
		printf("��Ϊ�����ʦ\n");

	}
	return 0;
}
