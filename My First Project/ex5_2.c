#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void myreverse(char str[]);

int main() {
	char str[100] = "abcdefghi";

	printf("before :");
	puts(str);
	myreverse(str);
	printf("After :");
	puts(str);

	return 0;
}
void myreverse(char astr[]) {
	int i, length;
	char bstr[100] = "";
	
	length = (int)strlen(astr);
	for (i = 0; i < length;i++) {
		bstr[i] = astr[length-i- 1];
		printf("i=%d astr=%s \n", i, astr);
	}
	bstr[i] = '\0';
	strcpy(astr, bstr);   //astr에 bstr에 붙여넣는
}