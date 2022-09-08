#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
double a,b,c,d,x1,x2;
printf("emter a b c =");
scanf("%lf %lf %lf ",&a,&b,&c);
d = sqrt(b*b-4*a*c);

x1 = (-b+d)/(2*a);
x2 = (-b-d)/(2*a);

printf("x1 is %lf\n",x1);
printf("x2 is %lf\n",x2);





 getch();
}