#define _CRT_SECURE_NO_WARNINGS 1

//学习使用auto定义变量的用法。
/*
auto用于定义局部变量，只存在函数内，如 auto int i 和 int i 等价。
出作用域后，生命周期结束。
*/

#include <stdio.h>

int Add(int a)
{
	auto int b = 0;
	b++;
	return a + b;
}

int main()
{
	int i = 1;
	auto int a = 1;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", Add(a));
	}//由于局部变量b出了函数之后便被销毁，每次调用Add都是重新创建b，因此结果不变
    return 0;
}