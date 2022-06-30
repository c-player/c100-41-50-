#define _CRT_SECURE_NO_WARNINGS 1

/*static*/ int Add(int a, int b)
{
	return a + b;
}

//函数名前不加static时默认外部函数（即 extern int Add），可供其他文件调用。
//加了static后，函数变为内部函数，只能供本文件内部调用
//加了static后，43.c无法运行