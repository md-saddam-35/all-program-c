#include <stdio.h>
int main()
{
    double num1, num2;
    char ch;

    printf("\nsimpul calclutor\n");

    printf("enter any chartor + , - , * , / , = ");
    scanf("%c", &ch);
    printf("enter tow number =: ");
    scanf("%lf %lf",&num1,&num2);

    switch (ch)
    {
    case '+':
    {
        printf("%lf + %lf = %lf\n", num1, num2, num1 + num2);
        break;
    }
    case '-':
    {
        printf("%lf - %lf = %lf\n", num1, num2, num1 - num2);
        break;
    }
    case '*':
    {
        printf("%lf * %lf = %lf\n", num1, num2, num1 * num2);
        break;
    }
    case '/':
    {
        printf("%lf / %lf = %lf\n", num1, num2, num1 / num2);
        break;
    }
    default:
    
     printf("not valide operetor \n");
      break;
    }
    
    
 getch();
}