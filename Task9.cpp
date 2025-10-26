#include <stdio.h>
int main() {
	int original[3][3] = {0};
	int rotated[3][3] = {0};
	int temp,notsame=0;
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			printf("Enter value for element at index (%d,%d) :\n",i+1,j+1);
			scanf("%d",&original[i][j]);
		}
	}
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			rotated[j][i] = original[i][j];
		}
	}
	for (int i=0;i<3;i++) {
		for (int j=0;j<1;j++) {    //j < 1, so inner loop only iterates once because only 1st and 3rd element in every row need switching
			temp = rotated[i][j];
            rotated[i][j] = rotated[i][2 - j];   //rotated[i][2 - j] is the right most element in a row of 3x3 matrix
            rotated[i][2 - j] = temp;
		}
	}
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			if (original[i][j] != rotated[i][j]) {
				notsame = 1;
				break;
			}
		}
	}
	printf("\nOriginal Matrix\n");
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			printf("%d ",original[i][j]);
		}
		printf("\n");
	}
	printf("\nRotated Matrix\n");
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			printf("%d ",rotated[i][j]);
		}
		printf("\n");
	}	
	if (notsame == 0) {
		printf("\nBoth matrices are the same!\n");
	}
	else {
		printf("Both matrices are different\n");
	}
	return 0;
}
