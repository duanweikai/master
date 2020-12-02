#include<stdio.h>
#include<windows.h>
#include <assert.h>
#pragma warning(disable:4996)
void left_reverse_one(char* str, int len)//左旋一次
{
	int tmp = str[0];//存储第一位
	int i = 0;
	while (i < len - 1)//i最大到len-2
	{
		str[i] = str[i + 1];
		i++;
	}
	str[i] = tmp;//将第一位放到最后一位
}
void left_reverse(char* str, int len, int n)
{
	assert(str);
	assert(len > 0);
	assert(n > 0);
	n %= len;//去掉无效次数
	while (n--)//左旋n次
	{
		left_reverse_one(str, len);
	}
}
int main()
{
	int n = 0;
	printf("Please Enter:");
	scanf("%d", &n);
	char str[] = "abcd1234";
	int len = strlen(str);

	printf("%s\n", str);
	left_reverse(str, len, n);
	printf("%s\n", str);

	system("pause");
	return 0;
}
