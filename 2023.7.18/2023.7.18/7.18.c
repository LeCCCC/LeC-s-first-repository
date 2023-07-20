#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char arr[] = "feawfe";//符串结尾位置隐藏了字符"\0"，前面的字符串应是"fwefwe\0"，\0是字符串的结束标志
	char arr1[] = { 'a','b','c' };//相当于放了abc……  后面的省略号代表剩余的未打印内存
	char arr3[] = { 'a','b','c','\0' };//但如果这样手动放置\0就能终止字符串
	char arr2[] = "abc";//相当于放了abc\0
	printf("%s\n", arr2);
	printf("%s\n", arr1);//%s是输出字符串组
	printf("%s\n", arr3);
	//求字符串长度用strlen函数//string length
	int length = strlen("abc");
	printf("length=%d\n", length);
	printf("%d\n", strlen(arr1));//此处打印出来将是一个随机值，因为原括号里没有带\0，剩余内存量随机
	printf("%d\n", strlen(arr2));
	return 0;
}