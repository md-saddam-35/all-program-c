#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int frist = 0, second=1, count = 0, fibo, n;
    printf("enter range = ");
    scanf("%d", &n);

    while (count < n)
    {
        if (count <= 1)
        {
            fibo = count;
        }
        else
        {
            fibo = frist + second;
            frist = second;
            second = fibo;
        }
         printf("%d ", fibo);
         count++;
    }

    
getch();
}