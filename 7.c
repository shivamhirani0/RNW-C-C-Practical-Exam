#include <stdio.h>

int main() {

    int start, end, year;

    printf("Enter start year and end year: ");

    scanf("%d%d", &start, &end);

    year = start;

    while (year<=end) {

        if ((year%4==0 && year%100 != 0) || (year % 400 == 0))

            printf("%d ", year);

        year++;
    }
    return 0;
}