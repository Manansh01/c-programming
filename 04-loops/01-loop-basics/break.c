#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            printf("Loop stopped at %d.\n", i);
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}