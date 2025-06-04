/*
    This is a simple calculator that can:
    Take in user input,
    Perform basic arithmetic operations,
    Provide answers for the arithmetic operations.
*/

#include <stdio.h>

// Function to add two numbers.
void calculateSum(float x, float y) {
    float sum = x + y;
    printf("The sum of %.2f and %.2f is: %.2f\n", x, y, sum);
}

// Function to subtract two numbers.
void calculateDifference(float x, float y) {
    float difference = x - y;
    printf("The difference between %.2f and %.2f is: %.2f\n", x, y, difference);
}

// Function to multiply two numbers.
void calculateMultiplication(float x, float y) {
    float multiplication = x * y;
    printf("The multiplication of %.2f and %.2f is: %.2f\n", x, y, multiplication);
}

// Function to divide two numbers.
void calculateDivision(float x, float y) {
    if (y != 0) {
        float division = x / y;
        printf("The division of %.2f by %.2f is: %.2f\n", x, y, division);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    float num1, num2;
    char continueCalculation = 'y';
    int choice;

    // Allows for the user to continue using the calculator if they want to.
    while (continueCalculation == 'y' || continueCalculation == 'Y') {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        // Prompts the user to input the numbers.
        printf("Enter the first number: ");
        scanf("%f", &num1);

        printf("Enter the second number: ");
        scanf("%f", &num2);

        // Perform the selected operation
        switch (choice) {
            case 1:
                calculateSum(num1, num2);
                break;
            case 2:
                calculateDifference(num1, num2);
                break;
            case 3:
                calculateMultiplication(num1, num2);
                break;
            case 4:
                calculateDivision(num1, num2);
                break;
            default:
                printf("Invalid choice. Please select a number between 1 and 4.\n");
        }

        // Ask the user if they want to continue
        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &continueCalculation);
    }

    printf("Thank you for using the calculator!\n");
    return 0;
}