#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter value of first number: ");
    scanf("%d", &a);

    printf("Enter value of second number: ");
    scanf("%d", &b);

    printf("Enter value of third number: ");
    scanf("%d", &c);

    if (a < b) {
        if (a < c) {
            printf("The minimum value is: %d", a);
        } else {
            printf("The minimum value is: %d", c);
        }
    } else {
        if (b < c) {
            printf("The minimum value is: %d", b);
        } else {
            printf("The minimum value is: %d", c);
        }
    }

    return 0;
}
