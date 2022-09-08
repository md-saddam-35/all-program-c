#include<stdio.h>
int main()
{
int num1,num2,n1,n2,rem,g,l;
printf("Enter teo number = ");
  scanf("%d%d",&num1,&num2);

  n1=num1;
  n2=num2;

while(n2!=0)
{
rem=n1% n2;
n1=n2;
n2=rem;
}
g=n1;

l=(num1*num2)/g;

printf("gcd=%d\n",g);
printf("lcm=%d\n",l);

    getch();
}