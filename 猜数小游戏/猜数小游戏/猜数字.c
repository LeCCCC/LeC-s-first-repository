#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num == 520)
		printf("�¶������Ұ��㣡");
	else if (num > 520)
		printf("����Ŷ~");
	else
		printf("С��Ŷ~");
}