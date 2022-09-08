#include<stdio.h>
#include<conio.h>

void main(){

//int a=10;

//printf("%d\n",a);

int digit;

printf("enter a digit = ");
scanf("%d",&digit);

   switch(digit)
   {
      case 0:
         printf("zero\n");
      break;
      case 1:
         printf("one \n");
         break;
      case 2:
         printf("two");
      break;
      case 3:
         printf("thre \n");
      break;
      case 4: 
         printf("fore \n");
      break;
      case 5:
         printf("five \n");
      break;
      case 6:
         printf("xix\n");
      break; 
      case 7:
         printf("caven  \n");
         break;
      case 8:
         printf("eight \n");
      break;
      case 9:
         printf("nine \n");
      break;
      default:
         printf("not a valid digit ");
      break;

   }

getch();

}