#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float a = 9 / 2.0;
	printf("%f\n", a);
	int b = 2;
	int c = b >> 1;
	printf("%d\n",c);




	int d = b;
	while (b <10)
	{
		b++;
		printf("%d\n", b);
	
	}
	printf("%d\n",!b);




	int e = 10;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(a));
	int arr[15] = { 0 };
	printf("%d\n", sizeof(arr));//���������ܴ�С����λ�ֽ�byte
	printf("%d\n", sizeof(arr[1]));//��������ڶ���Ԫ�صĴ�С
	//���Ҫ��һ�������Ԫ�ظ����������������ܴ�С����Ԫ�ش�С����Ϊһ���������Ԫ�����ͱ���һ�£��൱����ƽ����
	int f = sizeof(arr) / sizeof(arr[1]);
	printf("%d\n", f);

	return 0;
}