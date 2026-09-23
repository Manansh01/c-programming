#include <stdio.h>

int is_leap_year(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return 1;
    }
    return 0;
}

int main() {
    int day, month, year;
    int days_in_month;

    printf("Enter day month year: ");
    scanf("%d %d %d", &day, &month, &year);

    if (year <= 0 || month < 1 || month > 12 || day < 1) {
        printf("Invalid date\n");
        return 0;
    }

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days_in_month = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days_in_month = 30;
            break;
        case 2:
            days_in_month = is_leap_year(year) ? 29 : 28;
            break;
        default:
            printf("Invalid date\n");
            return 0;
    }

    if (day <= days_in_month) {
        printf("Valid date\n");
    } else {
        printf("Invalid date\n");
    }

    return 0;
}
