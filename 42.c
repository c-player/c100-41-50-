#define _CRT_SECURE_NO_WARNINGS 1

//ѧϰʹ��auto����������÷���
/*
auto���ڶ���ֲ�������ֻ���ں����ڣ��� auto int i �� int i �ȼۡ�
����������������ڽ�����
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
	}//���ھֲ�����b���˺���֮��㱻���٣�ÿ�ε���Add�������´���b����˽������
    return 0;
}