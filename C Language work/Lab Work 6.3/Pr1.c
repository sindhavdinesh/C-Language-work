#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("The sum of all numbers: %d", sum);

    return 0;
}

// output //

Enter any number: 5
The sum of all numbers: 15
--------------------------------
Process exited after 11.7 seconds with return value 0
Press any key to continue . . .