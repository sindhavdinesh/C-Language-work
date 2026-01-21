#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j % 2);
        }
        printf("\n");
    }

    return 0;
}

// output //

1 0 1 0 1
1 0 1 0
1 0 1
1 0
1

--------------------------------
Process exited after 0.1568 seconds with return value 0
Press any key to continue . . .