#include <stdio.h>

int main() {
    int i, j, space;

    for (i = 10; i >= 6; i--) {

        // print spaces
        for (space = 0; space < (i - 6); space++)
            printf("  ");

        // print numbers from i to 10
        for (j = i; j <= 10; j++)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}

   // output //

        10
      9 10
    8 9 10
  7 8 9 10
6 7 8 9 10

--------------------------------
Process exited after 0.2152 seconds with return value 0
Press any key to continue . . .