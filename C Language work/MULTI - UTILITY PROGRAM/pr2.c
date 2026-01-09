#include <stdio.h>

int main() {
    float baseSalary, hra, da, ta, grossSalary;

    printf("Enter Base Salary: ");
    scanf("%f", &baseSalary);

    printf("Enter HRA percentage: ");
    scanf("%f", &hra);

    printf("Enter DA percentage: ");
    scanf("%f", &da);

    printf("Enter TA percentage: ");
    scanf("%f", &ta);

    grossSalary = baseSalary +
                  (baseSalary * hra / 100) +
                  (baseSalary * da / 100) +
                  (baseSalary * ta / 100);

    printf("Gross Salary: Rs. %.2f\n", grossSalary);

    return 0;
}

// output //

Enter Base Salary: 100
Enter HRA percentage: 10
Enter DA percentage: 5
Enter TA percentage: 8
Gross Salary: Rs. 123.00

--------------------------------
Process exited after 39.54 seconds with return value 0
Press any key to continue . . .
