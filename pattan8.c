#include <stdio.h>
int main()
{
    int n, r, c;
    printf("enter n = ");
    scanf("%d", &n);

    for (r = 1; r <= n - 1; r++) // row
    {
        for (c = 1; c <= n - r; c++)
        { // spse

            printf(" ");
        }
        for (c = 1; c <= 2 * r - 1; c++) // colam
        {
            printf("*"); // number
        }
        printf("\n");
    }

    getch();
}