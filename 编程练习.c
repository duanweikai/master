#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int main()
{
	int murder[4] = { 0 }; //默认4个人都不是凶手
	int i;
	for (i = 0; i < 4; i++) //遍历假设四个人中的某个人是凶手
	{
		murder[i] = 1; //假设某个人是凶手
		if ((murder[0] != 1) +
			(murder[2] == 1) +
			(murder[3] == 1) +
			(murder[3] != 1) == 3)
		{
			break; //满足就代表就是你了！
		}
		murder[i] = 0; //不满足还他清白
	}
	putchar('A' + i); //打印凶手的编号。我们的编号是0 1 2 3，加上'A'后变成A B C D。
	return 0;
}

//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[20][20] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		arr[i][0] = 1;
//		for (int j = 1; j <= i; j++){
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//			printf("%3d", arr[i][j]);
//		printf("\n");
//
//	}
//	system("pause");
//	return 0;
//}