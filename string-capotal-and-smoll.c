#include<stdio.h>
#include<string.h>
int main(){

char str[50];
int i,capital,smoll,digit;
 i=capital=smoll=digit=0;

printf("Enter a string =:");
gets(str);

for ( i = 0;(str[i])!='\0'; i++)
{
  if (str[i]>=65 && str[i]<=90)
  {
      capital++;
  }
  
 else if (str[i]>=97 && str[i]<=122)
  {
      smoll++;
  }

 
 else if (str[i]>=48 && str[i]<=57)
  {
      digit++;
  }
}

printf("capital leter = %d\n",capital);
printf("smoll leter = %d\n",smoll);
printf("digit leter = %d\n",digit);










    getch();
}