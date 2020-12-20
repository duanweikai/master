#include"contact.h"

void Menu()
{
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


static int Isfull(contact_t* ct) {
	assert(ct);
	if ((ct->cap == ct->size))
		return 1;
	return 0;

}

static int IsExist(contact_t* ct, const char* telphone)
{
	assert(telphone);
	person_t* end = ct->persons + ct->size;
	int index = 0;
	for (person_t* p = ct->persons; p < end; p++, index++) {
		if (0 == strcmp(p->telphone, telphone)) {
			//return p - ct->persons;
			return index;   //返回下标
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
		printf("该电话号码已经存在\n");
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
	printf("当前容量%d/%d\n", ct->size, ct->cap);
	for (person_t *p=ct->persons; p < ct->persons+ct->size; p++)
	{
		printf("|%s|%c|%d|%s|%s\n", p->name,p->sex,p->age,p->telphone,p->address);
	}

}
void Del(contact_t* ct) {
	assert(ct);
	char key[SIZE / 8];
	printf("请输入你要删除的电话号码:");
	scanf("%s", key);
	int index = 0;
	if ((index=IsExist(ct,key)) >= 0) {
		ct->persons[index] = ct->persons[ct->size - 1];
		ct->size -= 1;
		printf("删除成功\n");
	}
	else {
		printf("你要删除的数据不存在");
		return;
	}
}
static void SearchPhoneNumber(contact_t* ct){	
	assert(ct);
	char key[SIZE / 8];
	printf("请输入你要查找的电话号码:\n");
	scanf("%s", key);
	int index = 0;
	if ((index = IsExist(ct, key)) >= 0) {
		printf("查找成功\n");
		person_t* p = ct->persons + index;
		printf("姓名：%s\n",p->name);
		printf("年龄：%d\n", p->age);
		printf("年龄：%c\n", p->sex);
		printf("年龄：%s\n", p->address);
		printf("年龄：%s\n", p->telphone);
	}
	else {
		printf("你要查找的数据不存在\n");
		return;
	}
}

void Search(contact_t* ct) {
	assert(ct);
	int select;
	printf("1.按电话号码查找\n");
	printf("2.按姓名查找\n");
	scanf("%d",&select);
	switch (select) {
	case 1:
		SearchPhoneNumber(ct);
		break;
	case 2:
		//SearchName();
		break;
	default:
		break;
	}
}

void Mod(contact_t* ct) {
	assert(ct);
	char key[SIZE / 8];
	printf("请输入你要修改的电话号码:\n");
	scanf("%s", key);
	int index = 0;
	if ((index = IsExist(ct, key)) >= 0) {
		person_t* p = ct->persons+index;
		printf("请输入修改后的姓名:");
		scanf("%s", p->name);
		printf("请输入修改后的电话号码:");
		char temp[SIZE / 8];
		scanf("%s", temp);
		if (IsExist(ct, temp) >= 0)
		{
			printf("该电话号码已经存在\n");
			return;
		}
		strcpy(p->telphone,temp);
		printf("请输入修改后的性别:");
		scanf("%s", &(p->sex));
		printf("请输入修改后的年龄:");
		scanf("%d", &(p->age));
		printf("请输入修改后的地址:");
		scanf("%s", &p->address);
	}
	else {
		printf("你要修改的数据不存在\n");
		return;
	}
}
static int CompPerson(const void* x, const void* y)
{
	person_t* x_p = (person_t*)x;
	person_t* y_p = (person_t*)y;

	return strcmp(x_p->name, y_p->name);
}

void Sort(contact_t* ct)
{
	assert(ct);
	qsort(ct->persons, ct->size, sizeof(person_t), CompPerson);
	printf("排序完成\n");
}

void Clear(contact_t* ct)
{
	assert(ct);
	ct->size = 0;
	printf("该通讯录已经清空\n");
}