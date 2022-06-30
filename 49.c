#define _CRT_SECURE_NO_WARNINGS 1

//#if #ifdef和#ifndef的综合应用。

#include <stdio.h>
#include <string.h>
#define LETTER 1
#define TRUE 1

char* InvertStr(char* arr)
{
	int i = 0, j = 0;
	int tmp;
	int len = strlen(arr);
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
	return arr;
}

int main()
{
	int i = 0;
	char arr[] = "Chinese Math";
	char c;
	while ((c = arr[i++]) != '\0')
	{
#ifdef LETTER  //可改成#ifndef LETTER,则改变执行程序段
		if (c >= 'a'&&c <= 'z')
		{
			c -= 32;
		}
#else
		if (c >= 'A'&&c <= 'Z')
		{
			c += 32;
		}
#endif // LETTER
		printf("%c", c);
	}
	printf("\n");
#if TRUE
	printf("%s", InvertStr(arr));
#else
	printf("%s", arr);
#endif // 0
    return 0;
}