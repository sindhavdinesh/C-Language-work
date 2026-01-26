#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = n; i >= 1; i--) {

        // spaces
        for (j = 1; j < i; j++) {
            printf("  ");
        }

        // increasing numbers
        for (j = i; j <= n; j++) {
            printf("%d ", j);
        }

        // decreasing numbers
        for (j = n - 1; j >= i; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }
    return 0;
}

// output //

        5
      4 5 4
    3 4 5 4 3
  3 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1

--------------------------------
Process exited after 0.2114 seconds with return value 0

Press any key to continue . . .
