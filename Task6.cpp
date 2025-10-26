#include <stdio.h>
int main() {
	int original[3][3] = {0};
	int transpose[3][3] = {0};
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			printf("Enter value for index (%d,%d)\n",i+1,j+1);  //starting index at 1,1 for user ease.
			scanf("%d",&original[i][j]);	
		}
	}
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			transpose[j][i] = original[i][j];
		}
	}
	printf("\nOriginal Matrix :\n");
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			printf("%d ",original[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose Matrix :\n");
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			printf("%d ",transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}
