#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 5;
	//printf("%d\n",a);
	int b = 0;
	//printf("%d\n", ~b);
	int c = ++b;
	printf("%d\n", c);//先让b本身加1再把这个值赋给c,变量b的值在以下的代码里不再为0，而是1，所以c=1
	printf("%d\n", b);//由于已经加了1，所以此时打印为1
	int d = a++;//先给d赋值a的5，此时d=5,再让a+1=6
	printf("%d\n", d);//此处的d只是接受了a的赋值，但a+1的动作是在这之后完成，所以此时d仍然=5
	printf("%d\n", a);//在把原本5的值赋给d后，a+1，此时a=6

	int g = (int)3.14;
	printf("%d\n", g);

	int h = 3;
	int i = 5;
	if (h && i)//h和i都是整数，为真，则括号内内容也表示为真)
	{

}

	int j = h && i;//因为h和i都是真，所以j也为真，表示为1
	printf("%d\n", j);
	//但如果二者里有一个为假，则输出为假
	int o = 0;
	int p = o && h;
	printf("%d\n",p);

	int q = o || h;
	printf("%d\n", q);//逻辑或，二者里面只要有一个是真则输出为真

	int ab = 0;
	int bc = 3;
	int max = 0;
	max = ab > bc ? ab : bc;


	int aa = 1;
	int bb = 2;
	int cc = 3;
	int dd = (aa = bb + 1, bb = cc - 2, cc = aa + 2);
	printf("%d\n",dd);//逗号表达式，从左到右依次计算，整个表达式结果是最后一个表达式的结果
	return 0;
}