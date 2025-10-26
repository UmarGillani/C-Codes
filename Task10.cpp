#include <stdio.h>
int main() {
	int n=0;
	printf("Enter number of rows for Pascals Triangle :\n");
	scanf("%d",&n);
 	for (int i = 0; i < n; i++) {
        int fact_n = 1;
        for (int k = 1; k <= i; k++) {
            fact_n *= k;
        }
        for (int space = 0; space < (n - i - 1); space++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            int fact_r = 1;
            int fact_nr = 1;
            for (int k = 1; k <= j; k++) {
                fact_r *= k;
            }
            for (int k = 1; k <= (i - j); k++) {
                fact_nr *= k;
            }
            int value = fact_n / (fact_r * fact_nr);
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}
	
