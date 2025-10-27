#include <stdio.h>

float average(int a, int b, int c);

int main() {
	float avg = 0;
	int num1 = 20, num2 = 49, num3 = -12;
	avg = average(num1,num2,num3);
	printf("Average of %d, %d and %d is = %.2f\n",num1,num2,num3,avg);
	return 0;	
}

float average(int a, int b, int c) {
	float sum=0;
	sum = a+b+c;
	return (sum/3);
}
