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
			Del(&ct);
			break;
		case 3:
			Search(&ct);
			break;
		case 4:
			Mod(&ct);
			break;
		case 5:
			Show(&ct);
			break;
		case 6:
			Clear(&ct);
			break;
		case 7:
			Sort(&ct);
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
