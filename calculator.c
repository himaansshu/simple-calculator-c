#include <stdio.h>
#include <math.h>

void print_menu();

int main() {
    int choice;
    double first, second, result;

    while (1) {
        print_menu();
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting calculator...\n");
            break;
        }

        printf("\nPlease enter the first number: ");
        scanf("%lf", &first);

        printf("Now, enter the second number: ");
        scanf("%lf", &second);

        switch (choice) {
            case 1: // Addition
                result = first + second;
                break;

            case 2: // Subtraction
                result = first - second;
                break;

            case 3: // Multiplication
                result = first * second;
                break;

            case 4: // Division
                if (second == 0) {
                    printf("Error: Division by zero!\n");
                    continue;
                }
                result = first / second;
                break;

            case 5: // Modulus
            if (second == 0) {
                    printf("Error: Division by zero!\n");
                    continue;
                }
                result = (int)first % (int)second;
                break;

            case 6: // Power
                result = pow(first, second);
                break;

            default:
                printf("Invalid choice!\n");
                continue;
        }

        printf("\nResult of operation: %.2lf\n", result);
    }
        printf("\nDeveloped by Himanshu Kumar\n");

    return 0;
}

void print_menu() {
    printf("\nWelcome to the Simple Calculator\n");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");
    printf("\nNow, Enter your choice: ");
}
