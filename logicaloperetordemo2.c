#include<stdio.h>
int main(){

int num1,num2,num3;
printf("enter thre numbers = ");
  scanf("%d%d%d",&num1,&num2,&num3);

  if(num1>num2 && num1>num3)
    printf("number 1 %d\n",num1);

else if(num2>num1 && num2>num3)
   printf("number 2 %d \n",num2);

else if(num3>num1 && num3>num2 )

    printf("number 3 %d \n",num3);
else 

printf("numbers is uqles");









    getch();
}