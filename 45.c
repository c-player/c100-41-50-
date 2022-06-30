#define _CRT_SECURE_NO_WARNINGS 1

//学习使用register定义变量的方法。
/*
register:有些变量使用频繁（如在函数中执行10000次循环，每次循环都要引用该局部变量），
存取变量要花费很多时间，为提高执行效率，可将变量存放在寄存器中。
需要时直接从寄存器取出运算，不必到内存中存取（对寄存器的存取速度远高于对内存的存取速度）。
声明寄存器变量用register
*/


#include <stdio.h>

int main()
{
	register int i, sum = 0;
	for (i = 1; i < 1000; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);
    return 0;
}