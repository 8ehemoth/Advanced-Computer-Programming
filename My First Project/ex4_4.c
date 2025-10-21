#include <stdio.h>

int main() {
	char str[] = "This is C programming";
	char* ptr;
	int i;

	ptr = str;
	while (*ptr)
		printf("%c", *ptr++);

	printf("\n");

	ptr = str;
	for (i = 0; i < strlen(str); i++) {
		printf("%c", *(ptr + i));
	}

	printf("\n");

	return 0;
}