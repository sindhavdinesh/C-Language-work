#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    do {
        count++;
        num = num / 10;
    } while (num != 0);

    printf("Total number of digits: %d", count);

    return 0;
}

// output //

Enter any number: 752
Total number of digits: 3
--------------------------------
Process exited after 34.5 seconds with return value 0
Press any key to continue . . .