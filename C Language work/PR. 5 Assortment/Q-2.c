#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[10][10];
    int max;

    printf("Enter the array's row size: ");
    scanf("%d", &r);

    printf("Enter the array's column size: ");
    scanf("%d", &c);

    printf("\nEnter array's elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    max = a[0][0];
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    printf("\nThe largest element is: %d", max);

    return 0;
}

// output //

Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6

The largest element is: 9
--------------------------------
Process exited after 84.32 seconds with return value 0
Press any key to continue . . .