#include <stdio.h>

int main() {
	int num1 = 50;
	float num2 = 420.69;
	char character = 'U';
	void *ptr;
	ptr = &num1;
	printf("Integer variable holds value : %d\n",*(int *)ptr);
	ptr = &num2;
	printf("Float variable holds value : %.3f\n",*(float *)ptr);
	ptr = &character;
	printf("Char variable holds value : %c\n",*(char *)ptr);
	return 0;
}
