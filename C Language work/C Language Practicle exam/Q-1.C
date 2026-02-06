#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float avg;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    avg = (m1 + m2 + m3 + m4 + m5) / 5.0;

    printf("Average = %.2f\n", avg);

    if (avg >= 90)
        printf("Grade: A\n");
    else if (avg >= 75)
        printf("Grade: B\n");
    else if (avg >= 50)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}

// output //

Enter marks of 5 subjects:
80
88
86
76
60
Average = 78.00
Grade: B

--------------------------------
Process exited after 21.99 seconds with return value 0
Press any key to continue . . .
