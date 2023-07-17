#define  _CRT_SECURE_NO_WARNINGS
#define MAX 10000//定义MAX=10000
#include <stdio.h>
enum sex//enum是枚举关键字
{
	male,
	female,
	secret,//此处是给sex枚举三个未来可能的值，sex的值只能是这三个
};
int main()
{
	15416;//整型常量
	23.225;//浮点常量
	'a';//字符常量
	"afsascfew";//​​​​​​​字符串常量
	const int num = 23;//const修饰的常变量，无法改变
	int a = MAX;//相当于定义a=10000
	printf("a=%d\n", a);//此时打印a=10000
	return 0;
}