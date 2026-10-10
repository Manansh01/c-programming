#include<stdio.h>

int main(void){

    int range;

    printf("Enter the Range of prime numbers you want: ");
    scanf("%d", &range);

    for (int i = 2; i <= range; i++) {
      int isPrime = 1;

      for (int divisor = 2; divisor <= i / divisor; divisor++) {
        if (i % divisor == 0) {
          isPrime = 0;
          break;
        }
      }

      if (isPrime) {
        printf("%d\n", i);
      }
    }
}