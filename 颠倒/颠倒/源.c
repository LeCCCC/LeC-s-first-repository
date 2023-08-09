#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	printf("请输入需要替换的字符和网格规模->");
	int size, row, line,yon = 0;
	char note = getchar();
	getchar();
	scanf("%d", &size);
	getchar();
	printf("请用“@”描绘你想颠倒的图画\n");
	char arr[200][200];

	for (row = 0; row < size ; row++)
	{
		for (line = 0; line < size ; line++)
			scanf("%c", &arr[row][line]);
			getchar();
	}
	for (row = 0; row < size; row++)
	{
		for (line = 0; line < size; line++)
			if (arr[row][line] != ' ')
				arr[row][line] = note;
	}
	for (row = 0; row < size; row++)
	{
		for (line = 0; line < size; line++)
		{
			if (arr[row][line] != arr[size - 1 - row][size - 1 - line])
				yon = 1;
		}
	}
	if (yon != 1)
	{
		printf("无需倒置,直接替换！\n");
	}
	for (row = size-1; row >= 0; row--)
	{
		for (line = size-1; line >= 0; line--)
			printf("%c", arr[row][line]);
			printf("\n");
	}

	return 0;
}