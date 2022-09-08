#include <stdio.h>
int main()
{
    int num, sum = 0, tem, rem, fact, i;

    printf("Eten any entger =: ");
    scanf("%d", &num);
    tem = num;

    while (tem != 0)
    {
        rem = tem % 10;
        fact = 1;
        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        tem = tem / 10;
    }
    if (sum == num)
        printf("%d strong number\n",num);
    else
            printf("%d not storng number\n",num);


            getch();
}

