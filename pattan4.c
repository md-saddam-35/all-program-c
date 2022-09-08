#include <stdio.h>
int main()
{

    int n, row, colam;
    printf("enter n = ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)  ///row
    {

        for (colam = 1; colam <=n-row; colam++)  //spse
        {
            printf(" ");
        }

        for (colam = 1; colam <= row; colam++)  //colam
        {
            printf("*");               //number
        }

        printf("\n");
    }

    for (row = n; row >= 1; row--)            //row
    {

        for (colam = 1; colam <n- row; colam++) //spse
        {
            printf(" ");
        }

        for (colam = 1; colam <= row; colam++)  //colam
        {
            printf("*");               //number
        }

        printf("\n");
    }

    getch();
}