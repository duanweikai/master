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
			return index;   //�����±�
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
	printf("����������:");
	scanf("%s", p->name);
	printf("������绰����:");
	scanf("%s", p->telphone);
	if (IsExist(ct,p->telphone)>=0)
	{
		printf("�õ绰�����Ѿ�����\n");
		return;
	}
	printf("�������Ա�:");
	scanf("%s", &(p->sex));
	printf("����������:");
	scanf("%d", &(p->age));
	printf("�������ַ:");
	scanf("%s", &p->address);
	ct->size += 1;
	printf("��ӳɹ�!\n");
}

void Show(contact_t* ct) {
	assert(ct);
	printf("��ǰ����%d/%d\n", ct->size, ct->cap);
	for (person_t *p=ct->persons; p < ct->persons+ct->size; p++)
	{
		printf("|%s|%c|%d|%s|%s\n", p->name,p->sex,p->age,p->telphone,p->address);
	}

}
void Del(contact_t* ct) {
	assert(ct);
	char key[SIZE / 8];
	printf("��������Ҫɾ���ĵ绰����:");
	scanf("%s", key);
	int index = 0;
	if ((index=IsExist(ct,key)) >= 0) {
		ct->persons[index] = ct->persons[ct->size - 1];
		ct->size -= 1;
		printf("ɾ���ɹ�\n");
	}
	else {
		printf("��Ҫɾ�������ݲ�����");
		return;
	}
}
static void SearchPhoneNumber(contact_t* ct){	
	assert(ct);
	char key[SIZE / 8];
	printf("��������Ҫ���ҵĵ绰����:\n");
	scanf("%s", key);
	int index = 0;
	if ((index = IsExist(ct, key)) >= 0) {
		printf("���ҳɹ�\n");
		person_t* p = ct->persons + index;
		printf("������%s\n",p->name);
		printf("���䣺%d\n", p->age);
		printf("���䣺%c\n", p->sex);
		printf("���䣺%s\n", p->address);
		printf("���䣺%s\n", p->telphone);
	}
	else {
		printf("��Ҫ���ҵ����ݲ�����\n");
		return;
	}
}

void Search(contact_t* ct) {
	assert(ct);
	int select;
	printf("1.���绰�������\n");
	printf("2.����������\n");
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
	printf("��������Ҫ�޸ĵĵ绰����:\n");
	scanf("%s", key);
	int index = 0;
	if ((index = IsExist(ct, key)) >= 0) {
		person_t* p = ct->persons+index;
		printf("�������޸ĺ������:");
		scanf("%s", p->name);
		printf("�������޸ĺ�ĵ绰����:");
		char temp[SIZE / 8];
		scanf("%s", temp);
		if (IsExist(ct, temp) >= 0)
		{
			printf("�õ绰�����Ѿ�����\n");
			return;
		}
		strcpy(p->telphone,temp);
		printf("�������޸ĺ���Ա�:");
		scanf("%s", &(p->sex));
		printf("�������޸ĺ������:");
		scanf("%d", &(p->age));
		printf("�������޸ĺ�ĵ�ַ:");
		scanf("%s", &p->address);
	}
	else {
		printf("��Ҫ�޸ĵ����ݲ�����\n");
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
	printf("�������\n");
}

void Clear(contact_t* ct)
{
	assert(ct);
	ct->size = 0;
	printf("��ͨѶ¼�Ѿ����\n");
}