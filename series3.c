#include<stdio.h>
int main(){

int n1,n2,sum=0,a=1,b=2;

printf("enter n1 n2 number =");
scanf("%d%d",&n1,&n2);

printf("1 * 2 + 3* 4 =......%d:\n",n1,n2);

while(a<=n1 && b<=n2){

sum=sum + a*b;
a=a+1;
b=b+2;

}

printf("last series of number = %d \n",sum);





    getch();
}