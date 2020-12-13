#include<stdio.h>
#include<assert.h>

int MyStrlen(const char* str) {
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}

char* Mystrcpy(char* dst, const char* src) {
	char* ret = dst;
	while (*src != '\0') {
		*dst = *src;
		dst++;
		src++;
	}
	return ret;
}

int MyStrcmp(const char* dst, const char* src) {
	int ret = 0;
	while (!(ret = *(unsigned char*)src - *(unsigned char*)dst) && *dst)
		++src; ++dst;
	if (ret < 0)
		ret = -1;
	else if (ret > 0)
		ret = 1;
	return ret;
}

char* MyStrcat(char* dst, const char* src)
{
	char* ret = dst;
	while (*dst)
	{
		dst++;
	}
	while (*src!='\0')
	{
		*dst = *src;
		dst++, src++;
	}
	*dst = '\0';
	return ret;
}
char* MyStrstr(const char* str1, const char* str2)
{
	char* cp = (char*)str1;
	char* substr = (char*)str2;
	char* s1 = NULL;
	if (*str2 == '\0')
		return NULL;
	while (*cp)
	{
		s1 = cp;
		substr = str2;
		while (*s1 && *substr && (*s1 == *substr))
		{
			s1++;
			substr++;
		}
		if (*substr == '\0')
			return cp;
		cp++;
	}
}


void* memmove(void* dst, const void* src, size_t count)
{
	void* ret = dst;
		if (dst <= src || (char*)dst >= ((char*)src + count)) {
			while (count--) {
				*(char*)dst = *(char*)src;
				dst = (char*)dst + 1;
				src = (char*)src + 1;
			}
		}
		else {
			dst = (char*)dst + count - 1;
			src = (char*)src + count - 1;
				while (count--) {
					*(char*)dst = *(char*)src;
					dst = (char*)dst - 1;
					src = (char*)src - 1;
				}
		}
		return(ret);
}

void* memcpy(void* dst, const void* src, size_t count)
{
	void* ret = dst;
	while (count--){
		*(char*)dst = *(char*)src;
		dst = (char*)dst + 1;
		src = (char*)src + 1;
	}
	return(ret);
}

int main() {
	const char* str = "abcd1234";
	//printf("%d", MyStrlen(str));
	char str1[16] = "0";
	//Mystrcpy(str1, str);
	//printf("%s", str1);
	//printf("%d", MyStrcmp(str, str2));
	const char* str2 = "1234";
	char str3[20] = "ABCD1234";
	//char* ret = MyStrcat(str3,str);
	//printf("%s", ret);
	//char* ret=MyStrstr(str,str2);
	//printf("%s", ret);
	char* ret = memcpy(str1, str,2);
	printf("%s", ret);



	
	return 0;
}