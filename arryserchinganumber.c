#include <stdio.h>
int main()
{

    int a[] = {10, 20, 30, 40, 50};

    int n, pos = -1, i;

    printf("enter sercing number =:");
    scanf("%d", &n);

    for (i = 0; i < 5; i++)
    {
        if (n == a[i])
        {
            pos = i + 1;
            break;
        }
    }
    if (pos == -1)
    {
        printf("item is not faund \n");
    }
    else
    {
        printf("sercing poction number is = %d\n", pos);
    }

    getch();
}