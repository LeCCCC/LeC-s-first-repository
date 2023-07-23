#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int l = 0;
	while (l < 10)
	{
		printf("arr=%d\n", arr[l]);
		l++;
	}
	return 0;
}