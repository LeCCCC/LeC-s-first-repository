#include <stdio.h>
int g = 132;//全局变量的作用域是整个工程文件
int main()
{
	{int a = 0;
		printf("2=%d\n",g);//全局变量作用域是整个文件，括号里仍然有效
	}
	int a = 24;
	printf("%d\n", a);
	printf("1=%d\n", g);
	//我在工程另一个源文件里创建了age变量，如果想在这个源文件里使用，需要用到extern（声明：告诉源文件有这么个变量可以）
	extern int age;
	printf("%d\n", age);
	return 0;
}//内部括号里的部分就是局部变量a的作用域，括号外的部分相当于不存在变量a,此处执行会输出a=24，因为上面的a作用域不在外面