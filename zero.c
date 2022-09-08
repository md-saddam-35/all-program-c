#include <stdio.h>
int main()
{
    int num;
    printf("enter any number= ");

    scanf("%d", &num);

    if (num > 0)
        printf("poghitiv\n");

    else if (num < 0)
        printf("neghitiv\n");

    else
        printf("zero\n");

    getch();
}