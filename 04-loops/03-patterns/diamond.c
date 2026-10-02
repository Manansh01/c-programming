#include <stdio.h>

int main(void)
{
	int rows;

	printf("Enter the number of rows for the top half: ");
	if (scanf("%d", &rows) != 1 || rows <= 0) {
		printf("Please enter a positive integer.\n");
		return 1;
	}

	for (int i = 1; i < 2 * rows; i++) {
		int width = i <= rows ? i : 2 * rows - i;
		for (int space = 0; space < rows - width; space++) {
			printf(" ");
		}
		for (int star = 0; star < 2 * width - 1; star++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
