#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;
int b = 125;
//���������Ľ�ȫ�ֱ�����������Ķ��оֲ�������������ͻʱ�ֲ���������
int main()
{
		//�����SC���������
		int height = 181;
	    float weight = 165.5;

		//��������
		//�������� ���� = ֵ;
		//�ı��������
		height = height+10;
		weight = weight - 20;
		printf("%d\n",height);
		printf("%f\n", weight);
		//д�������
		int C = 0;
		int D = 0;
		int sum = 0;
		scanf("%d %d", &C, &D);
		sum = C + D;
		printf("sum = %d\n", sum);

		return 0;
}