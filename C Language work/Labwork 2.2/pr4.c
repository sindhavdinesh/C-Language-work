#include <stdio.h>

int main() {
    float p, r, n, si;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time (in months): ");
    scanf("%f", &n);

    si = (p * r * n) / 100;

    printf("Simple Interest = %.2f\n", si);

    return 0;
}
