#include<stdio.h>
#pragma warning(disable:4996)
#define ROW 3  //�����к���
#define COL 3

int Find(int a[ROW][COL], int x)
{
    int i = 0;      //��ʼ��i��j
    int j = COL - 1;
    while (1)
    {
        int temp = a[i][j];   //�ҵ��˷���1
        if (temp = x)
            return 1;
        else if (temp > x&& j >= 0)//��x�󣬸�����
            temp = a[i--][j];
        else if (temp < x && j >= 0)//��xС��������
            temp = a[i][j++];
        else
            return 0;       //û�ҵ�������0**�ص�����**   
    }

}
int  main()
{
    int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
    printf("������Ҫ���ҵ�����");
    int x = 0;
    scanf("%d", &x);
    if (Find(a, x))
    {
        printf("�ҵ���\n");
    }
    else
    {
        printf("û�ҵ�\n");
    }
    return 0;
}

