#define _CRT_SECURE_NO_WARNINGS 1

//学习使用static的另一用法。
/*
static对局部变量和全局变量的作用不同。
对局部变量来说，它使变量由动态存储方式变为静态存储方式。
相对于局部变量，作用域不变，生命周期延长。
对全局变量来说，它使变量局部化（仅限本文件使用），仍为静态存储方式。
*/

#include <stdio.h>

int main()
{
	printf("%d", Add(2,3));
    return 0;
}