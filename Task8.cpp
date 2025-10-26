#include <stdio.h>
int main() {
	int matrix[3][3] = {0}, evens=0,odds=0,zeros=0,positives=0,negatives=0;
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			printf("Enter value for element at index (%d,%d) :\n",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			if (matrix[i][j] > 0) {
				positives++;
			}
			else if (matrix[i][j] < 0) {
				negatives++;
			}
			else {
				zeros++;
			}
			if (matrix[i][j] % 2 == 0) {
				evens++;
			}
			else {
				odds++;
			}
			
		}
	}
	printf("\nNumber of even elements = %d\n",evens);
	printf("Number of odd elements = %d\n",odds);
	printf("Number of zero(0) elements = %d\n",zeros);
	printf("Number of positive elements = %d\n",positives);
	printf("Number of negative elements = %d\n",negatives);
	return 0;
}
