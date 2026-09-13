#include<stdio.h>

int main(void) {
    
    int age = 25;
    float percentage = 87.5f;
    double pi = 3.141592653589793;
    char grade = 'A';
    short smallNumber = 10;
    long population = 780000000L;
    unsigned int count = 42;

    printf("Basic Data Types in C \n");
    printf("--------------------- \n");
    printf("int: %d\n", age);
    printf("float: %.2f\n", percentage);
    printf("double: %.15f\n", pi);
    printf("char: %c\n", grade);
    printf("short: %hd\n", smallNumber);
    printf("long: %ld\n", population);
    printf("unsigned int: %u\n", count);

    printf("\nSizes in bytes:\n");
    printf("int = %zu\n", sizeof(int));
    printf("float = %zu\n", sizeof(float));
    printf("double = %zu\n", sizeof(double));
    printf("char = %zu\n", sizeof(char));
    printf("short = %zu\n", sizeof(short));
    printf("long = %zu\n", sizeof(long));
    printf("unsigned int = %zu\n", sizeof(unsigned int));

    return 0;
}
