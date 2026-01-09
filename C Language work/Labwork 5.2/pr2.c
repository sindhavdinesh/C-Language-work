#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter value of first number: ");
    scanf("%d", &a);

    printf("Enter value of second number: ");
    scanf("%d", &b);

    printf("Enter value of third number: ");
    scanf("%d", &c);

    printf("Enter value of fourth number: ");
    scanf("%d", &d);

    if (a > b) {
        if (a > c) {
            if (a > d) {
                printf("The maximum value is: %d", a);
            } else {
                printf("The maximum value is: %d", d);
            }
        } else {
            if (c > d) {
                printf("The maximum value is: %d", c);
            } else {
                printf("The maximum value is: %d", d);
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                printf("The maximum value is: %d", b);
            } else {
                printf("The maximum value is: %d", d);
            }
        } else {
            if (c > d) {
                printf("The maximum value is: %d", c);
            } else {
                printf("The maximum value is: %d", d);
            }
        }
    }

    return 0;
}

// output //

Enter value of first number: 8
Enter value of second number: 3
Enter value of third number: 12
Enter value of fourth number: 7
The maximum value is: 12
--------------------------------
Process exited after 14.08 seconds with return value 0
Press any key to continue . . .