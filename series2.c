#include<stdio.h>
int main(){
int n,a=1,sum=0;

printf("enter  the last number of series = ");
scanf("%d",&n);
printf("1+ 2+ 3+ .......%d:\n",n);
while(a<=n){
sum=sum+a;
a=a+1;

}
printf("last series of number = %d \n",sum);



    getch();
}