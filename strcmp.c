#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)




//void swap_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 0))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 1))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}

void swap_arr(int arr[], int size) {
	int left = 0,right = size-1,temp = 0;
	while (left < right) {
		while ((left < right) && (arr[left] % 2 == 0))
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 1))
		{
			right--;
		}
		if (left < right) {
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;	
		}
	}
}


char* Strcpy(char* dst, const char* src)
{
	char* cp = dst;
	while (*src) {
		*dst = *src;
		dst++, src++;
	}
	*dst = *src;
	return cp;
}
//while (*cp++ = *src++);
int Strlen(char* str) {
	int count = 0;
	while (*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}


void reverse(int* arr,int sz) {
	int *left = arr;
	int *right =arr+sz-1;
	while (left < right)
	{
		int temp = 0;
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

int main() {
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hello bit\n");
	}


	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	//swap_arr(arr,size);
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%3d",arr[i]);
	//}

	//const char str[] = { "abcdefg" };
	//char a[16] ;
	//printf("strcpy:%s\n", Strcpy(a, str));



	//char str[] = { "abcdefg" };
	//printf("%d",Strlen(str));
	//



	//int count = 0;
	//int m=0,j=0;
	//scanf("%d", &m);
	//for (int i = 0; i < m; i++) {
	//	j++;
	//	count++;
	//}                
	//while(j) {
	//	j /= 2;
	//	count += j;
	//}             
	//printf("%d", count);
	///int line = 0;
	//int i = 0;
	//scanf("%d", &line);
	//for (i = 0; i < line; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < line - 1 - i; j++)   
	//	{
	//		printf(" ");
	//	}
	//	for (j = 0; j < 2 * i + 1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//for (i = 0; i < line - 1; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j <= i; j++)
	//	{
	//		printf(" ");
	//	}
	//	for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	system("pause");
	return 0;

	//int* arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//int sz = sizeof(arr) / sizeof(arr[0]);
//reverse(arr,sz);

//for (int i = 0; i < sz; i++)
//{
//	printf("%5d", arr[i]);
//}

}