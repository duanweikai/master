#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <assert.h>
int Compint(const void* xp, const void* yp) {
	char x = *(const char*)xp;
	char y = *(const char*)yp;
	if (x > y)
		return 1;
	else if (x < y)
		return -1;
	else
		return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <assert.h>

int char_cmp(const void* x, const void* y)
{
	assert(x && y);

	//因为数组里存的是字符串的地址，所以要强制类型转换成(char **)
	//然后再解引用一下才是字符串的地址
	return strcmp(*(char**)x, *(char**)y);

}

void swap(void* x, void* y, int size)
{

	int i = 0;

	for (i = 0; i < size; i++)
	{
		*((char*)x + i) ^= *((char*)y + i);
		*((char*)y + i) ^= *((char*)x + i);
		*((char*)x + i) ^= *((char*)y + i);
	}
}

//用冒泡排序模拟实现Qsort函数
void MyQsort(void* base, int count, \
	int size, int(*compare)(const void*, const void*))
{
	int i = 0;
	int j = 0;

	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - 1 - i; j++)
		{
			if (compare((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}

int main(void)
{
	char* arr[] = { "dddd", "bbbb", "cccc", "aaaa", "eeee" };
	int i = 0;

	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%s ", arr[i]);
	}
	printf("\n");

	//调用库函数来排序
	//因为字符串数组里面保存的都是指针
	//所以size在传参的时候要传指针的大小
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(char*), char_cmp);

	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%s ", arr[i]);
	}
	printf("\n");

	MyQsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(char*), char_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%s ", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

//int main() {
//	//int arr[] = { 1,4,7,8,11,55,22326,666,11881,4,30,411,506,288,668 };
//	char arr[] = { 'abc','aaa','sdsd' };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, num, sizeof(int), Compint);
//	for (int i = 0; i < num; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}