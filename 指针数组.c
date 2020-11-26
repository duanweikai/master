#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)




int main()
{
    int a[5] = { 5, 4, 3, 2, 1 };
    int* ptr = (int*)(&a + 1);
    printf("%d,%d", *(a + 1), *(ptr - 1));
    return 0;

    /**(a + 1)等同于a[1]，第一个是4，a的类型是int [5]，&a的类型就是int(*)[5]，
    是个数组指针。所以给int(*)[5]类型加一，相当于加了一个int [5]的长度。也就是这个指针直接跳过了a全部的元素，
    直接指在了刚好越界的位置上，然后转换成了int *后再减一，相当于从那个位置向前走了一个int，
    从刚好越觉得位置回到了1的地址处，所以第二个是1，*/
}


//int main()
//{
//    int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;  //&aa的类型是int (*)[2][5]，加一操作会导致跳转一个int [2][5]的长度，
//    //直接跑到刚好越界的位置。减一以后回到最后一个位置1处。*(aa + 1)相当于aa[1]，/
//    //也就是第二行的首地址，自然是5的位置。减一以后由于多维数组空间的连续性，会回到上一行末尾的6处。输出1.6。
//}



//int main()
//{
//	int murder[4] = { 0 }; //默认4个人都不是凶手
//	int i;
//	for (i = 0; i < 4; i++) //遍历假设四个人中的某个人是凶手
//	{
//		murder[i] = 1; //假设某个人是凶手
//		if ((murder[0] != 1) +
//			(murder[2] == 1) +
//			(murder[3] == 1) +
//			(murder[3] != 1) == 3)
//		{
//			break; //满足就代表就是你了！
//		}
//		murder[i] = 0; //不满足还他清白
//	}
//	putchar('A' + i); //打印凶手的编号。我们的编号是0 1 2 3，加上'A'后变成A B C D。
//	return 0;
//}

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