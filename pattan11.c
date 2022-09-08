#include <stdio.h>
int main()
{
    int n, r, c;
    printf("enter n = ");
    scanf("%d", &n);

    for (r = 1; r <= n; r++) // row
    {
        for (c = 1; c <= n; c++)
        { 
            if (r == c || r+c==n+1)
            
                printf("*");

            else

                printf(" ");
        }

        printf("\n");
      
    }

    getch();
}        