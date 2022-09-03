# array search
// i am asddam  and 
#include<stdio.h>
int main(){
int num[]={10 ,20, 30, 40,50 },i,pos=0,valu;

printf("enter the valu you want to search\t");

scanf("%d",&valu);

for ( i = 0; i <5; i++)
{
 if (valu==num[i])
 {
     pos=1+i;
     break;
 }
  
}

if (pos==0)
{
    printf("item is not faund ");
}
else
{
    printf("searcing number is = %d\n",pos);

}

getch();



}
