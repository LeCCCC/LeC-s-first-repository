#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char arr[] = "feawfe";//������βλ���������ַ�"\0"��ǰ����ַ���Ӧ��"fwefwe\0"��\0���ַ����Ľ�����־
	char arr1[] = { 'a','b','c' };//�൱�ڷ���abc����  �����ʡ�ԺŴ���ʣ���δ��ӡ�ڴ�
	char arr3[] = { 'a','b','c','\0' };//����������ֶ�����\0������ֹ�ַ���
	char arr2[] = "abc";//�൱�ڷ���abc\0
	printf("%s\n", arr2);
	printf("%s\n", arr1);//%s������ַ�����
	printf("%s\n", arr3);
	//���ַ���������strlen����//string length
	int length = strlen("abc");
	printf("length=%d\n", length);
	printf("%d\n", strlen(arr1));//�˴���ӡ��������һ�����ֵ����Ϊԭ������û�д�\0��ʣ���ڴ������
	printf("%d\n", strlen(arr2));
	return 0;
}