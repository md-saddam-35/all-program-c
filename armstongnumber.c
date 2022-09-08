#include <stdio.h>
#include <conio.h>
int main()
{

    int num, tem, r, sum = 0;
    printf("\nEnter any number =: ");
    scanf("%d",&num);

    tem = num;
    while (tem!= 0)
    {
        r = tem % 10;      
        sum = sum + r*r*r;    
        tem = tem / 10;   
    }
if(sum==num){
    printf("armstong numbers ");
}
else{
    printf("not armstong numbers ");
}
    getch();
}