#include <stdio.h>

//  Function to print the available calculation options:
void availableCalculations() {
    //  
    char* mathOperations[] = {"DIVISION", "MULTIPLICATION", "ADDITION", "SUBTRACTION"};

    int numOperations = sizeof(mathOperations) / sizeof(mathOperations[0]);

    printf("Available calculations:\n");
    for(int i = 0; i < numOperations; i++) {
        printf("%d. %s\n", i + 1, mathOperations[i]);
    }
}

int main() {
    availableCalculations();

    //  Allow a user to input what they want to calculate:
    int chooseOperation;
    printf("Choose what to calculate (1~4): ");
    scanf("%d", &chooseOperation);

    //  Checks if the user input 1 ~ 4:
    chooseOperation >= 1 && chooseOperation <= 4 ? printf("You chose: %d\n", chooseOperation) : printf("Invalid choice. Please input a number from 1 to 4.\n");

    //  Declare the variables for calculations:
    float Num1, Num2, sum;

    printf("Num1: ");
    scanf("%f", &Num1);

    printf("Num2: ");
    scanf("%f", &Num2);

    switch(chooseOperation) {
        case 1:
            sum = Num1 / Num2;
            Num2 == 0 ? printf("Division by ZERO is not allowed.") : printf("Division: %.4f", sum);
            break;
        case 2:
            sum = Num1 * Num2;
            printf("Multiplication: %.4f\n", sum);
            break;
        case 3:
            sum = Num1 + Num2;
            printf("Addition: %.4f\n", sum);
            break;
        case 4:
            sum = Num1 - Num2;
            printf("Subtraction: %.4f\n", sum);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    return 0;
}