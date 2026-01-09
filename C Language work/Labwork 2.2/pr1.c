#include <stdio.h>

int main() {
    float r, area;
    const float pi = 3.14;

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = pi * r * r;

    printf("Area of Circle = %.2f\n", area);

    return 0;
}
