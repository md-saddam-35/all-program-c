#include<stdio.h>
int main(){

    
int marks[5];
int i,sum=0;

printf("enter 5 sabjetc marks = ");
for ( i = 0; i <4; i++)
{
  scanf("%d",&marks[i]);
}



for(i=0;i<=4;i++){

sum=sum+marks[i];

}

   printf("sum is = %d\n",sum);
     printf("avareg number = %.2lf",(float)sum/5);





getch();


}