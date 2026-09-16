#include <stdio.h>

int main() {
    int age;
    int hasID;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have a valid ID? (1 = Yes, 0 = No): ");
    scanf("%d", &hasID);

    if (age >= 18) {
        if (hasID == 1) {
            printf("Eligible to vote.\n");
        } else {
            printf("Not eligible: valid ID required.\n");
        }
    } else {
        printf("Not eligible: must be at least 18 years old.\n");
    }

    return 0;
}
