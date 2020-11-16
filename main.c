#include "game.h"

int main() {
	int quit=0;
	while (!quit) {
		int select;
		Menu();
		printf("请输入你的选项\n");
		scanf("%d", &select);
		switch (select) {
		case 1:
			Game();
			break;
		case 2:
			printf("退出!");
			quit =1 ;	
			break;
		default:
			printf("你输入的有误，请重新输入\n");
			break;
		}
	}
	printf("Bye,Bye!\n");
	system("pause");
	return 0;
}	