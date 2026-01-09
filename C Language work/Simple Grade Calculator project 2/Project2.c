#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    // Input validation
    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter marks between 0 and 100.");
        return 0;
    }

    // Step 1: Grade Calculation using ternary operator
    grade = (score >= 90) ? 'A' :
            (score >= 75) ? 'B' :
            (score >= 60) ? 'C' :
            (score >= 40) ? 'D' : 'F';

    printf("Your grade is %c. ", grade);

    // Step 2: Additional comments using switch case
    switch (grade) {
        case 'A':
            printf("Excellent work! ");
            break;
        case 'B':
            printf("Well done. ");
            break;
        case 'C':
            printf("Good job. ");
            break;
        case 'D':
            printf("You passed, but you could do better. ");
            break;
        case 'F':
            printf("Sorry, you failed. ");
            break;
        default:
            printf("Invalid grade. ");
    }

    // Step 3: Eligibility check using if-else
    if (grade >= 'A' && grade <= 'D') {
        printf("You are eligible for the next level.");
    } else {
        printf("Please try again next time.");
    }

    return 0;
}


// output //

Enter your score: 92
Your grade is A. Excellent work! You are eligible for the next level.
--------------------------------
Process exited after 31.19 seconds with return value 0
Press any key to continue . . .