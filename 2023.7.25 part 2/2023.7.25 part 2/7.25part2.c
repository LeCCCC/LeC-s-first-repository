#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 5;
	//printf("%d\n",a);
	int b = 0;
	//printf("%d\n", ~b);
	int c = ++b;
	printf("%d\n", c);//����b�����1�ٰ����ֵ����c,����b��ֵ�����µĴ����ﲻ��Ϊ0������1������c=1
	printf("%d\n", b);//�����Ѿ�����1�����Դ�ʱ��ӡΪ1
	int d = a++;//�ȸ�d��ֵa��5����ʱd=5,����a+1=6
	printf("%d\n", d);//�˴���dֻ�ǽ�����a�ĸ�ֵ����a+1�Ķ���������֮����ɣ����Դ�ʱd��Ȼ=5
	printf("%d\n", a);//�ڰ�ԭ��5��ֵ����d��a+1����ʱa=6

	int g = (int)3.14;
	printf("%d\n", g);

	int h = 3;
	int i = 5;
	if (h && i)//h��i����������Ϊ�棬������������Ҳ��ʾΪ��)
	{

}

	int j = h && i;//��Ϊh��i�����棬����jҲΪ�棬��ʾΪ1
	printf("%d\n", j);
	//�������������һ��Ϊ�٣������Ϊ��
	int o = 0;
	int p = o && h;
	printf("%d\n",p);

	int q = o || h;
	printf("%d\n", q);//�߼��򣬶�������ֻҪ��һ�����������Ϊ��

	int ab = 0;
	int bc = 3;
	int max = 0;
	max = ab > bc ? ab : bc;


	int aa = 1;
	int bb = 2;
	int cc = 3;
	int dd = (aa = bb + 1, bb = cc - 2, cc = aa + 2);
	printf("%d\n",dd);//���ű��ʽ�����������μ��㣬�������ʽ��������һ�����ʽ�Ľ��
	return 0;
}