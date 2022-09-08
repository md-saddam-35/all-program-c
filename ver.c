#include<stdio.h>
int main()
{
int a,b,c, sum,m;
float avr;
printf("enter 3 number=");
scanf("%d %d %d",&a,&b,&c);
sum=a+b+c;

avr=(float)sum/2;

printf("%d %.2f\n",sum,avr);

return 0;



}