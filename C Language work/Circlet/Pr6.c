#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {

        // left side increasing
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // spaces
        for (j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }

        // right side decreasing
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }
    return 0;
}


// output //

1       1
1 2   2 1
1 2 3 3 2 1
1 2 3 4 4 3 2 1
1 2 3 4 5 4 3 2 1


--------------------------------
Process exited after 0.1954 seconds with return value 0

Press any key to continue . . .
