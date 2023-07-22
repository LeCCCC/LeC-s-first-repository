#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	//int i;//创建一个变量i
	//scanf("%d", &i);//使用scanf给i赋值，&i表示把d放在i的值里
	//int x = i * 2;	//创建一个变量x=i*2
	//printf("%d\n", x);//打印出来x的值
	//进行简单的运算
	//以上是根据自己所学和理解敲出来的代码
	 
	
	int a = 0;
	int b = 0;
	scanf("%d%d",&a, &b);
	//int c = a + b;
	//printf("c=%d\n",c);
	//这是一个不用函数的加法
	//如果使用函数如下
	int sum = Add(a, b);
	printf("%d\n", sum);
	//调用函数来进行运算可以在大工程里减少代码量的冗余，需要取用时直接调用函数即可

	//数组——一种相同类型的元素的集合
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//arr数组名称，10是数组内元素个数，int是元素类型，此处为整型
	char ch[5] = { 'a','b','c','d' };//不完全初始化:数组若元素没有放满，剩下的空间默认为0
	//数组内每个元素有一个下标，第一个下标为0，第二个为1，以此类推。调用数组内的元素使用下标表示
	printf("num=%d\n", arr[2]);//数组中第三个元素的下标是2，所以打印3


	int l = 0;
	while (l < 10)
	{
		printf("l=%d\n", arr[l]);
		l++;
	}
	return 0;

}
