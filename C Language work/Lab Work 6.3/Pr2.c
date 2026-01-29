#include <stdio.h>

int main()
{
    int n, i;
    long long fact = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("The factorial is: %lld", fact);

    return 0;
}
