#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct stu//结构体
{
	char name[20];//成员变量
	int age;
	double score;
};
int main()
{
	
	struct stu s = { "张三",20,85.5 };//结构体的创建和初始化
	printf("%s %d %lf\n", s.name,s.age,s.score);//结构体变量.成员变量         %lf打印双精度浮点型
	struct stu * ps = &s;
	printf("%s %d %lf\n", ps->name, ps->age, ps->score);//->左边用结构体的指针，右边用结构体成员名
	return 0;
}