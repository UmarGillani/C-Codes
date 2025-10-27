#include <stdio.h>

int main() {
	int *pointer = NULL;
	if (pointer == NULL) {
		printf("Pointer is NULL, does not point to any memory location!\n");
	}
	else {
		printf("Pointer holds valid address to a memory location\n");
	}
	return 0;
}
