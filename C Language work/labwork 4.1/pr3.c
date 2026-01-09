#include <stdio.h>

int main() {
    int x, y, result;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    result = (x + y) * (x + y) * (x + y);

    printf("(x + y)^3 = %d\n", result);

    return 0;
}

// output //

