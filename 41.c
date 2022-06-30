#define _CRT_SECURE_NO_WARNINGS 1

//学习static定义静态变量的用法。

#include <stdio.h>

int Add1(int a)
{
	static int b = 0;
	b++;
	return a + b;
}

int Add2(int a)
{
	int b = 0;
	b++;
	return a + b;
}

int main()
{
	int i;
	printf("static定义静态变量：");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", Add1(i));
	}
	printf("\n");
	printf("普通临时变量：");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", Add2(i));
	}
    return 0;
}