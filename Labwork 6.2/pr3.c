#include <stdio.h>

int main()
{
    int n, i = 2;

    printf("Enter any number: ");
    scanf("%d", &n);        // input

    do
    {
        printf("%d ", i);  // print even number
        i = i + 2;         // increment by 2
    } 
    while (i <= n);

    return 0;
}
