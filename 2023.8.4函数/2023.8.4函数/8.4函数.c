#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int max(int x, int y)
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a, b,big;
//	scanf("%d%d", &a, &b);
//	big = max(a,b);
//	printf("%d", big);
//	return 0;
//}
void ex(int* pa, int* pb)
{
	int z;
	z = *pa;
	*pa = *pb;
	*pb = z;


}
int main()
{
	int a, b;

	scanf("%d%d", &a, &b);
	ex(&a, &b);
	printf("%d %d", a, b);
	return 0;
}