#include <stdio.h>

void swap(int *a,int *b);

int main() {
	int a=5;
	int b=10;
	printf("Before Swapping\na = %d and b = %d\n",a,b);
	swap(&a,&b);
	printf("\nAfter Swapping\na = %d and b = %d\n",a,b);
	return 0;
}

void swap(int *a,int *b) {
	int temp=0;
	temp = *a;
	*a = *b;
	*b = temp;
}
