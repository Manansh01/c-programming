#include <stdio.h>

int main(void){
    float temp;

    printf("\n--- Temperature Classification ---\n");
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp < 0) {
        printf("Freezing\n");
    } else if (temp < 10) {
        printf("Very Cold\n");
    } else if (temp < 20) {
        printf("Cold\n");
    } else if (temp < 30) {
        printf("Normal\n");
    } else if (temp < 40) {
        printf("Hot\n");
    } else {
        printf("Very Hot\n");
    }


    return 0;
}
