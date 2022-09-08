#include<stdio.h>


char  string(char s[])
{
   int i;
   for ( i = 0; s[i]!='\0'; i++)
{
    printf("%c",s[i]);
    
}


}

int main()
{

    char str[10]="saddam";

   string(str);



    getch();
}