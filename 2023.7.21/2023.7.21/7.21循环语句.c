#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int line = 0;
	while (line < 30000)
	{
		printf("д���룡��\n");
		line++;
	}
	if (line == 30000)
	{
		printf("��Ϊ�����ʦ\n");

	}
	return 0;
}