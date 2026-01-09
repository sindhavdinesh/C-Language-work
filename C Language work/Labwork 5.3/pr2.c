#include <stdio.h>

int main() {
    int lang, choice;

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &lang);

    switch (lang) {
        case 1:   // English
            printf("\nPress 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("\nYou have successfully done an Internet Recharge.");
                    break;
                case 2:
                    printf("\nYou have successfully done a Top-up Recharge.");
                    break;
                case 3:
                    printf("\nYou have successfully done a Special Recharge.");
                    break;
                default:
                    printf("\nInvalid choice");
            }
            break;

        case 2:   // Hindi
            printf("\nInternet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("\nAapne safaltapurvak Internet Recharge kar liya he.");
                    break;
                case 2:
                    printf("\nAapne safaltapurvak Top-up Recharge kar liya he.");
                    break;
                case 3:
                    printf("\nAapne safaltapurvak Special Recharge kar liya he.");
                    break;
                default:
                    printf("\nGalat choice");
            }
            break;

        case 3:   // Gujarati
            printf("\nInternet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("\nTame safaltapurvak Internet Recharge karyu chhe.");
                    break;
                case 2:
                    printf("\nTame safaltapurvak Top-up Recharge karyu chhe.");
                    break;
                case 3:
                    printf("\nTame safaltapurvak Special Recharge karyu chhe.");
                    break;
                default:
                    printf("\nKhotu choice");
            }
            break;

        default:
            printf("\nInvalid language choice");
    }

    return 0;
}

// output //

Press 1 for English
Press 2 for Hindi
Press 3 for Gujarati
Enter your choice: 1

Press 1 for Internet Recharge
Press 2 for Top-up Recharge
Press 3 for Special Recharge
Enter your choice: 2

You have successfully done a Top-up Recharge.
--------------------------------
Process exited after 25.95 seconds with return value 0
Press any key to continue . . .