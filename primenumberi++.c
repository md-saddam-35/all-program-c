#include <stdio.h>
int main()
{
while(1)
{
    int num, count = 0, i;
    printf("enter any positif number = : ");
    scanf("%d",&num);

    for (i = 2; i<=num; i++)
    {
        if (num % i == 0)
        {
            (count++);
        }
        break;
    }

    if (count == 0)
        printf("\tprime number \n");

    else
        printf("\tnot prime number \n");
}
    return 0;
}