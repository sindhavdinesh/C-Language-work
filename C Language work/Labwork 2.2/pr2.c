#include <stdio.h>

int main() {
    float l, area;

    printf("Enter length of square: ");
    scanf("%f", &l);

    area = l * l;

    printf("Area of Square = %.2f\n", area);

    return 0;
}
