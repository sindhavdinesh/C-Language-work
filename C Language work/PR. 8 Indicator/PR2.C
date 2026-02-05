#include <stdio.h>

int main() {
    int a[10][10], i, j, n;

    printf("Input:\n");
    printf("Enter array's size: ");
    scanf("%d", &n);

    printf("\nEnter array elements:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOutput:\n");
    printf("Cubes of all elements:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", a[i][j] * a[i][j] * a[i][j]);

            if (j < n - 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

// output //

Input:
Enter array's size: 2

Enter array elements:
a[0][0] = 3
a[0][1] = 2
a[1][0] = 5
a[1][1] = 4

Output:
Cubes of all elements:
27 8
125 64

--------------------------------
Process exited after 38.52 seconds with return value 0
Press any key to continue . . .