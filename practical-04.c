#include<stdio.h>

int main()
{


    float  a,b , final;
    char form;

    printf("WE are going to addition, subtration, multiplication and division of two number");

    printf("\nEnter First Number: ");
    scanf("%f",&a);

    printf("Chose your operator(+,-,*,/): ");
    scanf(" %c",&form);

    printf("\nEnter second Number: ");
    scanf("%f",&b);

    switch (form) {
    case '+':
        final= a + b;
        printf("Your answer is: %.4f",final);
        break;
    case '-':
        final= a - b;
        printf("Your answer is: %.4f",final);
        break;
    case '*':
        final= a * b;
        printf("Your answer is: %.4f",final);
        break;
    case '/':
        final= a / b;
        printf("Your answer is: %.4f",final);
        break;

    default:
        printf("Invalid Sign");
            break;
    }


    return 0;
}