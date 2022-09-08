#include <stdio.h>
int main()
{
    int n1, r, tem, sum = 0;

    printf("enter any number =");
    scanf("%d", &n1);
    tem = n1;
    while (tem != 0)
    {
        r = tem % 10;
        sum = sum * 10 + r;
        tem = tem / 10;
    }
    printf("revars number of %d\n", sum);


getch();
}
