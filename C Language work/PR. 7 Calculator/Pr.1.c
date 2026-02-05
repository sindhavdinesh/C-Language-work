#include <stdio.h>

/* Function declarations */
void add();
void sub();
void mul();
void divi();
void mod();

void menu();   

int main()
{
    int choice;

    while (1)
    {
        menu();   

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add();
            break;

        case 2:
            sub();
            break;

        case 3:
            mul();
            break;

        case 4:
            divi();
            break;

        case 5:
            mod();
            break;

        case 0:
            return 0;
        }

        printf("\n");
    }
}

/* Menu function */
void menu()
{
    printf("Press 1 for +\n");
    printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for %%\n");
    printf("Press 0 for the exit\n");
}

/* Addition */
void add()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Addition of %d and %d is %d\n", a, b, a + b);
}

/* Subtraction */
void sub()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Subtraction of %d and %d is %d\n", a, b, a - b);
}

/* Multiplication */
void mul()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Multiplication of %d and %d is %d\n", a, b, a * b);
}

/* Division */
void divi()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Division of %d and %d is %d\n", a, b, a / b);
}

/* Modulus */
void mod()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Modulus of %d and %d is %d\n", a, b, a % b);
}

// output //

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0

--------------------------------
Process exited after 33.41 seconds with return value 0
Press any key to continue . . .

