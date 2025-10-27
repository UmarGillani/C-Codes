#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
	float num1,num2,ans=0;
	int choice=0;
	float (*operation)(float, float) = NULL;  //function pointer
	printf("Enter the first number :\n");
	scanf("%f",&num1);
	printf("Enter the second number :\n");
	scanf("%f",&num2);
	printf("\n\t---Mini Calculator---\n");
	printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n\n");
	scanf("%d",&choice);
	if (choice == 1) {
		operation = add;
		ans = operation(num1,num2);
		printf("%.2f + %.2f = %.2f\n",num1,num2,ans);
	}
	else if (choice == 2) {
		operation = subtract;
		ans = operation(num1,num2);
		printf("%.2f - %.2f = %.2f\n",num1,num2,ans);
	}
	else if (choice == 3) {
		operation = multiply;
		ans = operation(num1,num2);
		printf("%.2f x %.2f = %.2f\n",num1,num2,ans);
	}
	else if (choice == 4) {
		if (num2 == 0) {
			printf("Math Error! Can not divide by zero!\n");
		}
		else {
			operation = divide;
			ans = operation(num1,num2);
			printf("%.2f / %.2f = %.2f\n",num1,num2,ans);
		}
	}
	else {
		printf("Invalid choice! Select from operations (1-4)\n");
	}
	return 0;
}

float add(float a, float b) {return (a+b);}
float subtract(float a, float b) {return (a-b);}
float multiply(float a, float b) {return (a*b);}
float divide(float a, float b) {return (a/b);}
