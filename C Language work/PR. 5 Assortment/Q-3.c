#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[10][10];

    printf("Enter the array's row & column size: ");
    scanf("%d", &r);

    c = r;

    printf("\nEnter array's elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe transpose matrix of an array:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}

// output //

Enter the array's row & column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6

The transpose matrix of an array:
2 3 8
4 5 2
1 4 6

--------------------------------
Process exited after 36.08 seconds with return value 0
Press any key to continue . . .
