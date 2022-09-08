#include<stdio.h>
#include<conio.h>
int main()
{

int num;
printf("enter the number = ");
    scanf("%d",&num);


switch(num)
{ 
case 1:
    printf("good\n");
      break;
case 2: 
    printf("good 2\n");
      break;

default :
       printf("its a not good");      
display();
}


  char ch;
    printf("enter any chartor = ");
  scanf("%c",&ch);

if (ch=='a'|| ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g')

  printf("that is a chretc numbers ");
 else 

   printf("that is a not chretor numbers ");


   getch();
}


 


