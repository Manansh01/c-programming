#include <stdio.h>

int main(void)
{
	int rows;

	printf("Enter the number of rows: ");
	if (scanf("%d", &rows) != 1 || rows <= 0) {
		return 1;
	}

	for (int row = 1; row <= rows; row++) {
		for (int number = 1; number <= row; number++) {
			printf("%d ", number);
		}
		printf("\n");
	}

	return 0;
}
