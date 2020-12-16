#include"contact.h"

void Menu() {
	printf("```````````````````````````````````\n");
	printf("```````````````````````````````````\n");
	printf("`    1.Add          2.Del         `\n");
	printf("`    3.Search       4.mod         `\n");
	printf("`    5.Show         6.clear       `\n");
	printf("`    7.Sort         0.exit        `\n");
	printf("```````````````````````````````````\n");
	printf("```````````````````````````````````\n");
	printf("```````````````````````````````````\n");
	printf("Please Select:                     \n");
}


int Isfull(contact_t* ct) {
	assert(ct);
	if ((ct->cap == ct->size))
		return 1;
	return 0;

}

int IsExist(contact_t* ct, const char* telphone)
{
	assert(telphone);
	person_t* end = ct->persons + ct->size;
	int index = 0;
	for (person_t* p = ct->persons; p < end; p++, index++) {
		if (0 == strcmp(p->telphone, telphone)) {
			//return p - ct->persons;
			return index;
		}
	}
	return -1;
}
void ADD(contact_t* ct) {
	assert(ct);

	if (Isfull(ct) == 1) {
		printf("This cap is full!\n");
		return;
	}
	person_t* p = ct->persons + ct->size;
	printf("请输入姓名:");
	scanf("%s", p->name);
	printf("请输入电话号码:");

	scanf("%s", p->telphone);
	if (IsExist(ct,p->telphone)>=0)
	{
		printf("该电话号码已经存在");
		return;
	}
	printf("请输入性别:");
	scanf("%s", &(p->sex));
	printf("请输入年龄:");
	scanf("%d", &(p->age));
	printf("请输入地址:");
	scanf("%s", &p->address);
	ct->size += 1;
	printf("添加成功!\n");
}

void Show(contact_t* ct) {
	assert(ct);
	for (person_t *p=ct->persons; p < ct->persons+ct->size; p++)
	{
		printf("|%s|%c|%d|%s|%s\n", p->name,p->sex,p->age,p->telphone,p->address);
	}

}