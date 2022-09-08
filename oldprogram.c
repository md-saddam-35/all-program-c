#include<stdio.h>
int main(){
  int num1, num2, sum;

printf("enter tow numbers = :");
scanf("%d %d",&num1,&num2);

sum=num1>num2 ? num1 : num2;
    printf("large numbers = %d \n",sum);



    return 0;
}
