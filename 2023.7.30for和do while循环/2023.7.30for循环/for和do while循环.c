#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{/*
	int i = 0;
	int b = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;
		printf("%d\n", i);
	}
	for (b = 1; b <= 10; b++)
	{
		if (b == 5)
			continue;
		printf("%d\n", b);
	}
	int c = 0;
	do
	{
		printf("我好帅x%d ",c);
		c++;
	} while (c < 6);*/
	/*int a = 0;
	int b = 0;
	int ret = 1;
	int sum = 0;*/

	/*for (a =1 ; a <= 3 ; a++)
	{
		ret = 1;
		for(b =1;b <= a ; b++)
		{
			ret = ret * a;
		}
		sum += ret;
	}*/
	/*int a = 0;
	int ret = 1;
	int c = 0;
	int sum = 0;
	scanf("%d", &c);
	for (a = 1; a <= c; a++)
	{
		ret *= a;
		sum += ret;
	}
	printf("%d", sum);
	return 0;*/
	
	int arr[] = {1,2,3,4,5,6,7,8,10};
	int k = 7;
	int left = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int right = sz - 1;
	int mid = (right + left) / 2;
	while (left <= right)
	if (arr[mid] < k)
	{
		left = mid + 1;
	}
	else if (arr[mid] > k)
	{
		right = mid - 1;
	}
	else
	{
		printf("找到了下标=%d",arr[mid]);
		break;
	}
	if (left > right)
		printf("找不到了呜呜呜");
	return 0;
}
