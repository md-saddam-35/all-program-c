#include<stdio.h>
int main()
{
  while(1){
float marka;
printf("enter your marka =:  ");
scanf("%f",&marka);
  if(marka>=101)
 
   printf("not a marka >>  ");
 
else if(marka>=80)
   printf("A+\n");

else if(marka>=70)
  printf("A\n");

else if(marka>=60)
  printf("A-\n");

else if(marka>=50)
  printf("B\n");

else if(marka>=40)
  printf("C\n");

else if(marka>=33)
  printf("D\n");

else if(marka<33|| marka>=0)
  printf("fail\n");

  }
    getch();
  }
