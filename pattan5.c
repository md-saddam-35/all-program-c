#include<stdio.h>
int main()
{
    int n, r, c;
    printf("enter n = ");
    scanf("%d",&n);

    for (r = 1; r <= n; r++)
    {

        for (c = 1; c <= r; c++)
        {


            printf("%d ",c*r);
        

        }
       printf("\n") ;
    }

    getch();
}