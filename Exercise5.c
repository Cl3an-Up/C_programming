#include <stdio.h>

/*
Simulate a simple ATM interface with the following options:
Check Balance
Deposit Money
Withdraw Money
Exit
Initialize the account balance to a specific amount (e.g., $1000).
Allow the user to perform multiple transactions until they choose to exit.
Ensure that withdrawals do not exceed the current balance.
*/

int main()
{
    int balance, option, deposit, withdraw;

    printf("This program simulates a simple ATM interface.\n");
    printf("Welcome to the ATM!\n");

    // Loop to validate the initial balance
    while (1)
    {
        printf("Please enter your bank account balance: ");
        if (scanf("%d", &balance) == 1 && balance >= 0)
        {
            break; // Valid input, exit the loop
        }
        else
        {
            printf("Error: Invalid input. Please enter a valid positive balance.\n");
            // Clear invalid input
            while (getchar() != '\n') { }
        }
    }

    do {
        // Display the menu options
        printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Choose an option: ");
        if (scanf("%d", &option) != 1) {
            printf("Error: Invalid input. Please enter a valid option (1, 2, 3, 4).\n");
            // Clear invalid input
            while (getchar() != '\n') { }
            continue; // Restart menu loop
        }

        switch (option) {
        case 1:
            // Check balance
            printf("Your current account balance is $%d\n", balance);
            break;

        case 2:
            // Deposit money
            printf("Enter deposit amount: ");
            if (scanf("%d", &deposit) != 1 || deposit < 0) {
                printf("Error: Invalid input. Please enter a valid deposit amount.\n");
                // Clear invalid input
                while (getchar() != '\n') { }
            } else {
                balance += deposit;
                printf("Deposit successful. New balance: $%d\n", balance);
            }
            break;

        case 3:
            // Withdraw money
            printf("Enter withdrawal amount: ");
            if (scanf("%d", &withdraw) != 1 || withdraw < 0) {
                printf("Error: Invalid input. Please enter a valid withdrawal amount.\n");
                // Clear invalid input
                while (getchar() != '\n') { }
            } else if (withdraw > balance) {
                printf("Error: Withdrawal amount exceeds the current balance.\n");
            } else {
                balance -= withdraw;
                printf("Withdrawal successful. New balance: $%d\n", balance);
            }
            break;

        case 4:
            // Exit the program
            printf("Exiting the program. Thank you for using the ATM!\n");
            break;

        default:
            // Invalid option
            printf("Error: Invalid option. Please enter a number between 1 and 4.\n");
        }
    } while (option != 4);

    return 0;
}
