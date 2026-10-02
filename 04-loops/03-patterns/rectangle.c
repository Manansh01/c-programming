#include <stdio.h>

int main(void)
{
	int rows, columns;

	printf("Enter the number of rows and columns: ");
	if (scanf("%d %d", &rows, &columns) != 2 || rows <= 0 || columns <= 0) {
		return 1;
	}

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
