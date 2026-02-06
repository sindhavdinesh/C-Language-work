#include <stdio.h>

int main() {
    int a[50], n, i;
    int *p;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;

    printf("Even elements are:\n");
    for (i = 0; i < n; i++) {
        if (*(p + i) % 2 == 0)
            printf("%d ", *(p + i));
    }

    return 0;
}

// output //

Enter size: 10
Enter elements:
1 2 3 4 5 6 7 8 9 10
Even elements are:
2 4 6 8 10
--------------------------------
Process exited after 14.55 seconds with return value 0
Press any key to continue . . .