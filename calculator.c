#include <stdio.h>

int main() {
    char op;
    float a, b;

    printf("Enter number, operator, number: ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op) {
        case '+':
            printf("%.2f\n", a + b);
            break;

        case '-':
            printf("%.2f\n", a - b);
            break;

        case '*':
            printf("%.2f\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("%.2f\n", a / b);
            else
                printf("Error! Cannot divide by zero.\n");
            break;

        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
