#include<stdio.h>
#include<windows.h>




char *Strcpy(char *dst, const char *src) {
	char *cp = dst;
	while (*src) {
		*dst = *src;
		dst++, src++;
	}
	*dst = *src;   //'\0'µÄ¸³Öµ
	return cp;
}

int Strlen(char* str) {
	int count = 0;
	while ((*str) != '\0')
	{
		count++;
		str++;
	}
	return count;
}


int main() {
	const char *a = "abcdefg123" ;
	char b[20];
	Strcpy(b, a);
	printf("%s\n", b);




	//char* str = "abcdefg";
	//int sum = Strlen(str);
	//printf("%d\n", sum);

	//return 0;
	//system("pause");
}