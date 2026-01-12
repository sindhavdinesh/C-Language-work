#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter any number: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);   // first two numbers

    for (i = 3; i <= n; i++)
    {
        next = a + b;        // next number
        printf("%d ", next);

        a = b;               // shift values
        b = next;
    }

    return 0;
}
