#include <stdio.h>
int main()
{
while(1){
    double num1, num2;
    char op;

    printf("enter the operetor( +.-. *. / ) : ");
    scanf("%c", &op);

    printf("\nenter two numbers : ");
    scanf("%lf %lf", &num1, &num2);

    switch (op)
    {
    case '+':
    {
        printf("%.2lf + %.2lf = %.2lf \n", num1, num2, num1 + num2);
        break;
    }

    case '-':
    {
        printf("%lf - %lf = %lf \n", num1, num2, num1 - num2);
        break;
    }

    case '*':
    {
        printf("%lf * %lf = %lf \n", num1, num2, num1 * num2);
        break;
    }

    case '/':
    {
        printf("%lf / %lf = %lf \n", num1, num2, num1 / num2);
        break;
    }

    default:
        printf("not a velid operetor ");
        break;
    }

    getch();
}
}