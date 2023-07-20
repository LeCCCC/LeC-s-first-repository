#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//今日学习使用转义字符
	printf("(你是什么鬼\?\?)");//此处\?\?防止??)解释成三字母词输出为]
	printf("%c\n", '\'');//\'表示普通字符 '
	printf("feffedf\\tefwe");//双重\\防止后面一个\被解释为转义字符
	printf("\n\a\a\a\a");//\a表示蜂鸣，用以警告
	printf("%c\n",'\130');
	return 0;
}