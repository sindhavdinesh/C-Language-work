#include <stdio.h>

void printOdd(int a[], int n) {
    int i;
    printf("Odd elements are:\n");

    for (i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            printf("%d ", a[i]);
}

int main() {
    int a[50], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printOdd(a, n);

    return 0;
}

// output //

Enter size: 5
Enter elements:
1 2 3 4 5
Odd elements are:
1 3 5
--------------------------------
Process exited after 52.74 seconds with return value 0
Press any key to continue . . .


