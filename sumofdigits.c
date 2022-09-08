#include <stdio.h>
#include <conio.h>
int main()
{

    int num, tem, r, sum = 0;
    printf("\nEnter any number =: ");
    scanf("%d", &num);

    tem = num;
    while (tem!= 0)
    {
        r = tem % 10;      //3   2 5
        sum = sum + r;     //3  
        tem = tem / 10;     //12  
    }

    printf("sum of digits = %d \n", sum);

    getch();
}