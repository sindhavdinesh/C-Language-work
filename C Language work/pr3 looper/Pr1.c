#include <stdio.h>

int main() {
    char ch = 'a';

    do {
        printf("%c ", ch);
        ch = ch + 4;
    } while (ch <= 'z');

    return 0;
}

// output //

a e i m q u y
--------------------------------
Process exited after 0.1495 seconds with return value 0
Press any key to continue . . .