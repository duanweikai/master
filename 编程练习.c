#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int main()
{
	int murder[4] = { 0 }; //Ĭ��4���˶���������
	int i;
	for (i = 0; i < 4; i++) //���������ĸ����е�ĳ����������
	{
		murder[i] = 1; //����ĳ����������
		if ((murder[0] != 1) +
			(murder[2] == 1) +
			(murder[3] == 1) +
			(murder[3] != 1) == 3)
		{
			break; //����ʹ���������ˣ�
		}
		murder[i] = 0; //�����㻹�����
	}
	putchar('A' + i); //��ӡ���ֵı�š����ǵı����0 1 2 3������'A'����A B C D��
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