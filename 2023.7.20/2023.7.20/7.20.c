#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//����ѧϰʹ��ת���ַ�
	printf("(����ʲô��\?\?)");//�˴�\?\?��ֹ??)���ͳ�����ĸ�����Ϊ]
	printf("%c\n", '\'');//\'��ʾ��ͨ�ַ� '
	printf("feffedf\\tefwe");//˫��\\��ֹ����һ��\������Ϊת���ַ�
	printf("\n\a\a\a\a");//\a��ʾ���������Ծ���
	printf("%c\n",'\130');
	return 0;
}