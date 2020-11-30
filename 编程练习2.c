#include<stdio.h>
#include<string.h>
#include<windows.h>
#pragma warning(disable:4996)

int findRound(const char* src, char* find)
{
	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
	strcpy(tmp, src); //先拷贝一遍
	strcat(tmp, src); //再连接一遍
	return strstr(tmp, find) != NULL; //看看找不找得到
}


int main() {
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char* str3 = "hello bit.";
	char* str4 = "hello bit.";
	//2,3 or 
	if (str1 == str2)
		printf("str1 and str2 are same\n"); 
	else
		printf("str1 and str2 are not same\n");

	if (str3 == str4)
		printf("str3 and str4 are same\n"); 
	else
		printf("str3 and str4 are not same\n");
	//char* str1 = "AABCD";
	//char* str2 = "BCDAA";
	//printf("%d\n", findRound(str1,str2));
	//
	//system("pause");
	//return 0;
}