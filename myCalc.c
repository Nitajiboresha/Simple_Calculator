#include <stdio.h>

float calculateAddition(float Num1, float Num2) {
    return Num1 + Num2;
}

float calculateSubtraction(float Num1, float Num2) {
    return Num1 - Num2;
}

float calculateMultiplication(float Num1, float Num2) {
    return Num1 * Num2;
}

float calculateDivision(float Num1, float Num2) {
    if (Num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return Num1 / Num2;
}

void calculationTypes() {
    char calculationChoices[4][100] = {
        "Division",
        "Multiplication",
        "Addition",
        "Subtraction"
    };
    for (int i = 0; i < 4; i++) {
        printf("\n%d. %s\n\n", i + 1, calculationChoices[i]);
    }
}

int main() {
    while (1) {
        int userCalculationTypeChoice;
        float num1, num2;
        float result;
        char userChoiceToContinueCalculating;

        printf("\nWhat would you like to calculate: \n");
        calculationTypes();
        printf("Choose (1 ~ 4): ");
        scanf("%d", &userCalculationTypeChoice);

        switch (userCalculationTypeChoice) {
            case 1:
                printf("Division of: \n");
                printf("NUM 1: ");
                scanf("%f", &num1);
                printf("NUM 2: ");
                scanf("%f", &num2);
                printf("Dividing...\n");
                result = calculateDivision(num1, num2);
                if (result != 0) {
                    printf("Answer = %.4f\n", result);
                }
                break;
            case 2:
                printf("Multiplication of: \n");
                printf("NUM 1: ");
                scanf("%f", &num1);
                printf("NUM 2: ");
                scanf("%f", &num2);
                printf("Multiplying...\n");
                result = calculateMultiplication(num1, num2);
                printf("Answer = %.4f\n", result);
                break;
            case 3:
                printf("Addition of: \n");
                printf("NUM 1: ");
                scanf("%f", &num1);
                printf("NUM 2: ");
                scanf("%f", &num2);
                printf("Adding...\n");
                result = calculateAddition(num1, num2);
                printf("Answer = %.4f\n", result);
                break;
            case 4:
                printf("Subtraction of: \n");
                printf("NUM 1: ");
                scanf("%f", &num1);
                printf("NUM 2: ");
                scanf("%f", &num2);
                printf("Subtracting...\n");
                result = calculateSubtraction(num1, num2);
                printf("Answer = %.4f\n", result);
                break;
            default:
                printf("\nPlease input a valid number (1 ~ 4)\n");
                break;
        }

        printf("\nDo you want to continue calculating? (y / n): ");
        scanf(" %c", &userChoiceToContinueCalculating);
        if (userChoiceToContinueCalculating == 'y' || userChoiceToContinueCalculating == 'Y') {
            continue;
        } else {
            break;
        }
    }

    return 0;
}