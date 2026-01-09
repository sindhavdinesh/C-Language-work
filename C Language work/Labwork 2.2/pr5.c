#include <stdio.h>

int main() {
    float r, perimeter;
    const float pi = 3.14;

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    perimeter = 2 * pi * r;

    printf("Perimeter of Circle = %.2f\n", perimeter);

    return 0;
}
