#include"contact.h"


int main() {
	contact_t ct;
	memset(&ct, 0, sizeof(ct));
	ct.cap = TOTAL;

	int quit = 0;
	int select;
	while (!quit) {
		Menu();
		scanf("%d",&select);
		switch(select) {
		case 1:
			ADD(&ct);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			Show(&ct);
			break;
		case 6:
			break;
		case 7:
			break;
		case 0:
			quit = 1;
			break;
		default:
			break;
		}

	}


	return 0;
	system("pause");
}
