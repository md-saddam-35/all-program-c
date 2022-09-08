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
        r = tem % 10;      
        sum = sum *10 + r; // 6   
        tem = tem / 10;      
    }

    printf("Reverse of number = %d \n", sum);

    getch();
}