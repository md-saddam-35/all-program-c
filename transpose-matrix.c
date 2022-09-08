#include <stdio.h>
int main()
{

    int a[20][20], tran[20][20], i, j, row, col;

    printf("Enter row and colum = ");
    scanf("%d%d", &row, &col);
    printf("Enter matrix = :");

        //scanf matrix ''''''
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)

        {
            printf("[%d][%d = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // printing matrix ........
printf("is a matrix \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
 //transpos matrix......../

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            tran[j][i] =a[i][j];
        }
        printf("\n");
    }
  

printf(" transpos matrix\n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d ",tran[i][j]);
        }
        printf("\n");
    }

    return 0;
}