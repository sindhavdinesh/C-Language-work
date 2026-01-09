#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter first angle: ");
    scanf("%d", &angle1);

    printf("Enter second angle: ");
    scanf("%d", &angle2);

    angle3 = 180 - (angle1 + angle2);

    printf("Third angle of triangle: %d\n", angle3);

    return 0;
}

// output //

Enter first angle: 60
Enter second angle: 40
Third angle of triangle: 80

--------------------------------
Process exited after 25.13 seconds with return value 0
Press any key to continue . . .