#include <stdio.h>

void calculate(int a, int b, int *sum, float *avg);

int main() {
	int num1 = 20, num2 = 99, sum=0;
	float average=0;
	calculate(num1,num2,&sum,&average);
	printf("Sum of %d and %d is = %d\n",num1,num2,sum);
	printf("Average of %d and %d is = %.2f\n",num1,num2,average);
	return 0;
}

void calculate(int a, int b, int *sum, float *avg) {
	float addnum = a + b; 			//sum is integer variable, so while averaging, decimal part is lost
	*sum = a + b;
	*avg = addnum / 2;				//used addnum variable to also include decimal part in average
}
