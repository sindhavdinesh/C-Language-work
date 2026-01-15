#include <stdio.h>

int main() {
    int num, first, last;

    printf("Enter any number: ");
    scanf("%d", &num);

    last = num % 10;

    do {
        first = num;
        num = num / 10;
    } while (num != 0);

    printf("The sum of the first and last digit: %d", first + last);

    return 0;
}

// output //

Enter any number: 384
The sum of the first and last digit: 7
--------------------------------
Process exited after 9.103 seconds with return value 0
Press any key to continue . . .