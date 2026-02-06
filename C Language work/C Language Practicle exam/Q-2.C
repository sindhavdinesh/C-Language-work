#include <stdio.h>

float average(int a[10][10], int r, int c) {
    int i, j, sum = 0;

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum += a[i][j];

    return (float)sum / (r * c);
}

int main() {
    int a[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Average = %.2f", average(a, r, c));

    return 0;
}

// output //

Enter rows and columns: 2 2
Enter elements:
10 20 30 40
Average = 25.00
--------------------------------
Process exited after 22.33 seconds with return value 0
Press any key to continue . . .
