#include<stdio.h>

int main() {
    float INR, USD;
    char shyam;

    printf("Enter 1 for USD to INR\nEnter 2 for INR to USD\n");
    scanf(" %c", &shyam);  // Notice the space before %c to ignore any newline character

    switch (shyam) {
        case '1':
            printf("Enter the amount in USD: ");
            scanf("%f", &USD);
            INR = 83.81 * USD;
            printf("The amount in INR is %.2f\n", INR);
            break;

        case '2':
            printf("Enter the amount in INR: ");
            scanf("%f", &INR);
            USD = 0.012 * INR;
            printf("The amount in USD is %.2f\n", USD);
            break;

        default:
            printf("Invalid input! Please enter 1 or 2.\n");
            break;
    }

    return 0;
}
