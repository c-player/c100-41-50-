#define _CRT_SECURE_NO_WARNINGS 1

//∫Í#define√¸¡Ó¡∑œ∞2°£

#include <stdio.h>
#define Swap(a,b) {a=a+b;b=a-b;a=a-b;}
#define S(a,b) (a)*(b)

int main()
{
	int a = 2, b = 3;
	Swap(a, b);
	printf("a=%d,b=%d\n", a, b);
	printf("%d\n", S(2, 3));
    return 0;
}