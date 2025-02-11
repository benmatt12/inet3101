#include <stdio.h>

int main() {

    int userNum;    // Declare the int that will be used as the user input

    do {
        // Print out the record database menu
        printf("\nRecords Database\n");
        printf("\n1. Print all records\n");
        printf("2. Add record\n");
        printf("3. Delete the last record\n");
        printf("4. Print number of records\n");
        printf("5. Print database size\n");
        printf("6. Print number of changes\n");
        printf("7. Exit\n");

        // Allow the user to select one of seven options on the menu
        printf("\nEnter your selection (1-7): ");
        scanf("%d", &userNum);

        // Case statements that will eventually allow the user interact with the menu
        switch (userNum) {
            default:
                printf("\nIncorrect input. Try again.\n");
                break;
            case 1:
                printf("\nPrinting all records...\n");
                break;
            case 2:
                printf("\nAdding record...\n");
                break;
            case 3:
                printf("\nDeleting the last record...\n");
                break;
            case 4:
                printf("\nPrinting number of records...\n");
                break;
            case 5:
                printf("\nPrinting database size...\n");
                break;
            case 6:
                printf("\nPrinting number of changes...\n");
                break;
            case 7:
                printf("\nExitting...\n");
                break;
        }
    } while (userNum != 7); // Keep showing the user the menu after each selection except 7

    return 0;
}
