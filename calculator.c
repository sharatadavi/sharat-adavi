#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Ask user for input
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;

        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
