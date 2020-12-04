#include<stdio.h>
#pragma warning(disable:4996)
#define ROW 3  //定义行和列
#define COL 3

int Find(int a[ROW][COL], int x)
{
    int i = 0;      //初始化i和j
    int j = COL - 1;
    while (1)
    {
        int temp = a[i][j];   //找到了返回1
        if (temp = x)
            return 1;
        else if (temp > x&& j >= 0)//比x大，给上走
            temp = a[i--][j];
        else if (temp < x && j >= 0)//比x小，给右走
            temp = a[i][j++];
        else
            return 0;       //没找到，返回0**重点内容**   
    }

}
int  main()
{
    int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
    printf("请输入要查找的数：");
    int x = 0;
    scanf("%d", &x);
    if (Find(a, x))
    {
        printf("找到了\n");
    }
    else
    {
        printf("没找到\n");
    }
    return 0;
}

