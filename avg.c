#include<stdio.h>
int main()
{
int num1,num2,sum, avg;

printf("enter two number :");

scanf("%d %d",&num1,&num2);

sum=num1+num2;

printf("number is %d\n",sum);

avg=sum/2;

printf("averag number is %d\n",avg);

 avg=sum%2;


 printf(" remainder is %d",avg);



    getch();
}