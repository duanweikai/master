#include<stdio.h>
#include<assert.h>
#include<string.h>


//×Ö·û´®×óĞınum´Î
char* resreve(char* str, int len, int num) {
	assert(str);
	num %= len;
	while (num) {
		char temp = str[0];
		for (int j = 0; j < len - 1; j++) {
			str[j] = str[j + 1];
		}
		str[len - 1] = temp;
		num--;
	}
	return str;
}
int main() {

	char str[] = "abcd1234";
	char* res = resreve(str, strlen(str), 3);
	printf("%s", res);
}