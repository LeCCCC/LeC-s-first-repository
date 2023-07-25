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
	printf("%d\n", sizeof(arr));//计算数组总大小，单位字节byte
	printf("%d\n", sizeof(arr[1]));//计算数组第二个元素的大小
	//如果要求一个数组的元素个数，可以用数组总大小除以元素大小，因为一个数组里的元素类型必须一致，相当于求平均数
	int f = sizeof(arr) / sizeof(arr[1]);
	printf("%d\n", f);

	return 0;
}