#include<conio.h>
int a=10;
int main()
{
char ch;
     printf("enter vowel chartor = ");
     scanf("%c",&ch);

switch(ch)
{
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   printf("this is a vowel ");
break;
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
   printf("this is a vowel\n ");
break;

default:
   printf("this is a consonent\n");

}

printf("\nnumber is %d\n ",a);

getch();
}