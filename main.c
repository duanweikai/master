#include "game.h"

int main() {
	int quit=0;
	while (!quit) {
		int select;
		Menu();
		printf("���������ѡ��\n");
		scanf("%d", &select);
		switch (select) {
		case 1:
			Game();
			break;
		case 2:
			printf("�˳�!");
			quit =1 ;	
			break;
		default:
			printf("���������������������\n");
			break;
		}
	}
	printf("Bye,Bye!\n");
	system("pause");
	return 0;
}	