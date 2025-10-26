#include <stdio.h>
int main() {
	int size;
	printf("Enter matrix order (2 or 3) :\n");
	scanf("%d",&size);
	if (size==2) {
		int matrix1[2][2] = {0}, matrix2[2][2] = {0}, result[2][2] = {0};
		for (int i=0;i<2;i++) {
			for (int j=0;j<2;j++) {
				printf("Enter value in 1st matrix for element at index (%d,%d) :\n",i+1,j+1);
				scanf("%d",&matrix1[i][j]);
			}
		}
		for (int i=0;i<2;i++) {
			for (int j=0;j<2;j++) {
				printf("Enter value in 2nd matrix for element at index (%d,%d) :\n",i+1,j+1);
				scanf("%d",&matrix2[i][j]);
			}
		}
		for (int i=0;i<2;i++) {
			for (int j=0;j<2;j++) {
				for (int k=0;k<2;k++) {
					result[i][j] += matrix1[i][k] * matrix2[k][j];
				}
	
			}
		}
		printf("\nResult of multiplication of both matrices :\n");
		for (int i=0;i<2;i++) {
			for (int j=0;j<2;j++) {
				printf("%d ",result[i][j]);
			}
			printf("\n");
		}
	}
	else {
		int matrix1[3][3] = {0}, matrix2[3][3] = {0}, result[3][3] = {0};
		for (int i=0;i<3;i++) {
			for (int j=0;j<3;j++) {
				printf("Enter value in 1st matrix for element at index (%d,%d) :\n",i+1,j+1);
				scanf("%d",&matrix1[i][j]);
			}
		}
		for (int i=0;i<3;i++) {
			for (int j=0;j<3;j++) {
				printf("Enter value in 2nd matrix for element at index (%d,%d) :\n",i+1,j+1);
				scanf("%d",&matrix2[i][j]);
			}
		}
		for (int i=0;i<3;i++) {
			for (int j=0;j<3;j++) {
				for (int k=0;k<3;k++) {
					result[i][j] += matrix1[i][k] * matrix2[k][j];
				}
	
			}
		}
		printf("\nResult of multiplication of both matrices :\n");
		for (int i=0;i<3;i++) {
			for (int j=0;j<3;j++) {
				printf("%d ",result[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
