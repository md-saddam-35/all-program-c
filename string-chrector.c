#include<stdio.h>
int main(){


char s1[20]="saddam";

 int i=0;
/*
while(s1[i]!='\0')
{
  printf("%c\n",s1[i]);
   i++;
} 
*/

for ( i = 0;s1[i]!= '\0'; i++)
{
    printf("%c",s1[i]);
}

printf("\n\n");


return 0;
}