#include <stdio.h>

int main() {
    int n, i;
    int a[100];

    printf("Enter the array's size: ");
    scanf("%d", &n);

    printf("\nEnter array's elements:\n");
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nNegative elements from an Array: ");
    for(i = 0; i < n; i++) {
        if(a[i] < 0) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}

// output //

Enter the array's size: 5

Enter array's elements:
a[0] = 2
a[1] = -4
a[2] = 1
a[3] = -3
a[4] = -5

Negative elements from an Array: -4 -3 -5
--------------------------------
Process exited after 29.67 seconds with return value 0
Press any key to continue . . .