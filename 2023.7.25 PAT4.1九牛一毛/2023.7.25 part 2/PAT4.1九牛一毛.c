#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a = 0;
    scanf("%d", &a);
    while (a <= 1000)
    {
        int b = a / 15;
        int c = a / 20;
        int d = a * 90;
        printf("%d", b);
        printf(" ");
        printf("%d", c);
        printf(" ");
        printf("%d", d);
        return 0;
    }
    
}