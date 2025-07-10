#include <stdio.h>

// Function declarations
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
float division(int a, int b);

// Function to display the menu
void displayMenu() {
    printf("\n------------------MENU------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("----------------------------------------\n");
}

int main() {
    int choice, num1, num2;

    // Display menu
    displayMenu();

    // Ask user for choice
    printf("Enter Your choice : ");
    scanf("%d", &choice);

    // Ask for numbers only if choice is valid
    if (choice >= 1 && choice <= 4) {
        printf("\nEnter first number : ");
        scanf("%d", &num1);

        printf("Enter second number : ");
        scanf("%d", &num2);
    }

    // Perform the selected operation
    switch (choice) {
        case 1:
            printf("\nAddition = %d\n", addition(num1, num2));
            break;
        case 2:
            printf("\nSubtraction = %d\n", subtraction(num1, num2));
            break;
        case 3:
            printf("\nMultiplication = %d\n", multiplication(num1, num2));
            break;
        case 4:
            if (num2 == 0) {
                printf("\nError: Division by zero is not allowed.\n");
            } else {
                printf("\nDivision = %.2f\n", division(num1, num2));
            }
            break;
        default:
            printf("\nInvalid choice. Please select from the menu.\n");
    }

    printf("----------------------------------------\n");
    return 0;
}

// Function Definitions
int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    return (float)a / b;
}
