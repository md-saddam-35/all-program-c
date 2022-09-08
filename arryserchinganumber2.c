#include <stdio.h>

int main()
{

    int a[] = {10, 20, 30, 40, 50};

    int v, pos = -1, i;

    printf("enter valu ");
    scanf("%d", &v);

    for (i = 0; i < 5; i++)
    {

        if (v == a[i])
        {

            pos = i + 1;
            break;
        }
    }
    if (pos == -1)
    {

        printf("value is not faund\n");
    }
    else
    {
        printf("poction is %d\n", pos);
    }

    return 0;
}