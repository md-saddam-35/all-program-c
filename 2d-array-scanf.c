#include <stdio.h>
#include <conio.h>
int main()
{

    int a[10][10], i, j, b[2][3], c[10][10], row, colam;

    printf("enter row then colam = :");

    scanf("%d %d", &row, &colam);

    printf("enter for a matrix = :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colam; j++)
        {
            printf("[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // MATIX
    printf("\n\n enter for b matrix = :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colam; j++)
        {
            printf("[%d][%d]=", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    printf("A = ");
    for (i = 0; i < row; i++)
    {
        printf("\t");
        for (j = 0; j < colam; j++)
        {

            printf("%d ", a[i][j] +b[i][j]);
        }
        printf("\n");
    }

     printf("\nB = ");
    for (i = 0; i < row; i++)
    {
        printf("\t");
        for (j = 0; j < colam; j++)
        {

            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    // matrix + +

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colam; j++)
        {

            c[i][j] = a[i][j] + b[i][j];
        }
   }

    
    printf("A + B = ");
    for (i = 0; i < row; i++)
    {
    
        for (j = 0; j < colam; j++)
        {

            printf("%d ",c[i][j]);
        }
    printf("\n");
    printf("\t");
    }


  
    return 0;
    
    
}