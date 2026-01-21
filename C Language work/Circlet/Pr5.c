#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = i; j <= 5; j++)
            printf("%d ", j);

        for (j = 4; j >= i; j--)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}

// output //

5
4 5 4
3 4 5 4 3
2 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1

--------------------------------
Process exited after 0.2114 seconds with return value 0
Press any key to continue . . .