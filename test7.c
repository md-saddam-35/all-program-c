#include<stdio.h>
int main(){
char ch;

printf("enter any chartor= ");
  scanf("%c",&ch);

if(ch >= 'a' && ch <= 'z')
    printf("small letter\n\n");

else if(ch>= 'A' && ch<= 'Z')
  printf("capitel letter\n\n");

else 
 printf("not a letter\n");



getch();
}