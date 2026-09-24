#include <stdio.h>

int main(void)
{
    int num = 1;

    do
    {
        printf("%d\n", num);
        num++;
    } while (num <= 5);

    return 0;
}