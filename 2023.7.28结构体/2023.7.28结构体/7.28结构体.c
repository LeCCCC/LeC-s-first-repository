#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct stu//�ṹ��
{
	char name[20];//��Ա����
	int age;
	double score;
};
int main()
{
	
	struct stu s = { "����",20,85.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("%s %d %lf\n", s.name,s.age,s.score);//�ṹ�����.��Ա����         %lf��ӡ˫���ȸ�����
	struct stu * ps = &s;
	printf("%s %d %lf\n", ps->name, ps->age, ps->score);//->����ýṹ���ָ�룬�ұ��ýṹ���Ա��
	return 0;
}