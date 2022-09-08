#include <stdio.h>
int main()
{

    int initial,fainal,tem,r, sum = 0,i;
    printf("\ninitial number = :");
    scanf("%d",&initial);

    printf("\nfainal number = :");
    scanf("%d",&fainal);

    for (i=initial;i<= fainal; i++)
    {

        tem = i;
        while (tem> 0)
        {

            r = tem % 10;
            sum = sum + r * r * r;
            tem = tem / 10;
        }
        if (sum == i)
        

            printf("armstom %d \n", sum);
        
    }

    sum = 0;
}