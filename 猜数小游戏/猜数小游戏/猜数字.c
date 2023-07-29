#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num == 520)
		printf("猜对啦，我爱你！");
	else if (num > 520)
		printf("大了哦~");
	else
		printf("小了哦~");
}