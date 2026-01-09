#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0 * celsius) + 32;

    printf("Temperature in Fahrenheit: %.1f\n", fahrenheit);

    return 0;
}


// output //

Enter temperature in Celsius: 38
Temperature in Fahrenheit: 100.4

--------------------------------
Process exited after 74.72 seconds with return value 0
Press any key to continue . . .