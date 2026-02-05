#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("Input: Enter any string: ");
    gets(str);   

    ptr = str;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Output: The length of a string is: %d", length);

    return 0;
}

// output //

Input: Enter any string: hello world
Output: The length of a string is: 11
--------------------------------
Process exited after 23.57 seconds with return value 0
Press any key to continue . . .