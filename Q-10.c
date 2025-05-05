#include <stdio.h>

int main() {
    int hours, minutes;
    printf("Enter the number of hours: ");
    scanf("%d", &hours);
    minutes = hours * 60;
    printf("%d hour(s) is equal to %d minute(s).\n", hours, minutes);

    return 0;
}
