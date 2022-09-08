#include<stdio.h>
void main(){
int num[100],i,n,max=0;

printf("enter How menei number =:");
scanf("%d",&n);
printf("sarcing maxcimum number =:");
scanf("%d",&num);
for ( i = 0; i <n; i++)
{
scanf("%d",&num[i]);
}

for (i = 0; i <n; i++)
{
  if (max<num[i])
  {
    max=num[i];
  }
  
}

printf("maxcimum number is = %d\n",max);



getch();














}