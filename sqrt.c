#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <windows.h>

#pragma warning(disable:4996)


int CompInt(const void *xp, const void *yp) //1, 0, -1
{
	int x = *(const int*)xp;
	int y = *(const int*)yp;
	if (x > y){
		return 1;
	}
	else if (x < y){
		return -1;
	}
	else{
		return 0;
	}
}

int CompString(const void *xp, const void *yp)
{
	const char *xs = *(char **)xp;
	const char *ys = *(char **)yp;

	return strcmp(xs, ys); //>0, 0, <0
}

void swap(char *p, char *q, size_t num)
{
	while (num){
		char temp = *p;
		*p = *q;
		*q = temp;
		num--;
		p++, q++;
	}
}

void my_qsort(void *base, size_t num, size_t size, \
	int(*comp)(const void*, const void *))
{
	assert(base);
	assert(comp);

	char *p = (char*)base;
	//控制的是循环趟数
	for (size_t i = 0; i < num - 1; i++){
		//一趟冒泡
		int flag = 0;
		for (size_t j = 0; j < num - 1 - i; j++){
			if (comp(p + j*size, p + (j + 1)*size) > 0){
				//交换
				swap(p + j*size, p + (j + 1)*size, size);
				flag = 1;
			}
		}

		if (flag == 0){
			break;
		}
	}
}

int main()
{
//	char arr[] = "abcdef";
//	//size_t strlen ( const char * str );
//	printf("%d\n", strlen(arr)); //6
//	printf("%d\n", strlen(arr + 0)); //6
//	//printf("%d\n", strlen(*arr)); //err
////	printf("%d\n", strlen(arr[1])); //err
//	printf("%d\n", strlen(&arr)); //6
//	printf("%d\n", strlen(&arr + 1)); //随机
//	printf("%d\n", strlen(&arr[0] + 1));//5





	//printf("%d\n", sizeof(arr)); //7
	//printf("%d\n", sizeof(arr + 0)); //4
	//printf("%d\n", sizeof(*arr)); //1
	//printf("%d\n", sizeof(arr[1])); //1
	//printf("%d\n", sizeof(&arr)); //4
	//printf("%d\n", sizeof(&arr + 1)); //4
 //	printf("%d\n", sizeof(&arr[0] + 1)); //4

	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	////size_t strlen ( const char * str );
	//printf("%d\n", strlen(arr)); //随机至少是6
	//printf("%d\n", strlen(arr + 0)); //随机至少是6
	////printf("%d\n", strlen(*arr)); //err,
	////printf("%d\n", strlen(arr[1])); //err,
	//printf("%d\n", strlen(&arr)); //随机至少是6，至少有一个警告
	//printf("%d\n", strlen(&arr + 1)); //随机，至少有一个警告
	//printf("%d\n", strlen(&arr[0] + 1));//随机，至少5，



	//printf("%d\n", sizeof(arr)); //6
	//printf("%d\n", sizeof(arr + 0));//4,
	//printf("%d\n", sizeof(*arr)); //1, 
	//printf("%d\n", sizeof(arr[1])); //1
	//printf("%d\n", sizeof(&arr)); //4
	//printf("%d\n", sizeof(&arr + 1)); //4
	//printf("%d\n", sizeof(&arr[0] + 1)); //4

	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a)); //16
	//printf("%d\n", sizeof(a + 0)); //4
	//printf("%d\n", sizeof(*a)); //4
	//printf("%d\n", sizeof(a + 1)); //4
	//printf("%d\n", sizeof(a[1])); //4
	//printf("%d\n", sizeof(&a)); //4
	//printf("%d\n", sizeof(*&a)); //16
	//printf("%d\n", sizeof(&a + 1)); //4
	//printf("%d\n", sizeof(&a[0])); //4
	//printf("%d\n", sizeof(&a[0] + 1)); //4






	//char *arr[] = {
	//	"a1bcd",
	//	"a3bcd",
	//	"a4ebcd",
	//	"a2bcd",
	//	"a5bcd",
	//	"abcd",
	//};

	//int num = sizeof(arr) / sizeof(arr[0]);
	//my_qsort(arr, num, sizeof(char*), CompString);

	//int arr[] = { 3, 1, 2, 234, 4, 1, 5, 7, 34, 23, 6, 7, 5, 43, 6, 7, 8, 9, 2345, 234, 234, 990 };
	//int num = sizeof(arr) / sizeof(arr[0]);
	//my_qsort(arr, num, sizeof(int), CompInt);
	system("pause");
	return 0;
}




//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	if (0 == y){
//		printf("div zero!\n");
//		return -1;
//	}
//
//	return x / y;
//}
//
//int main()
//{
//	int quit = 0;
//	int(*p[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//	while (!quit){
//		printf("#############################\n");
//		printf("# 1. ADD            2. SUB  #\n");
//		printf("# 3. Mul            4. Div  #\n");
//		printf("#                   5. Quit #\n");
//		printf("#############################\n");
//		printf("Please Select: ");
//		int select = 0;
//		scanf("%d", &select);
//		if (select < 1 || select > 5){
//			printf("select error, try again!\n");
//			continue;
//		}
//		if (select == 5){
//			quit = 1;
//			continue;
//		}
//		int  x, y;
//		printf("Please Enter Your Data(x,y)# ");
//		scanf("%d %d", &x, &y);
//
//		int result = p[select](x, y); //转移表
//
//		printf("result# %d\n", result);
//	}
//	system("pause");
//	return 0;
//}