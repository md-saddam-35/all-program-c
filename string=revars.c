#include<stdio.h>
int main(){


char s1[20]="md saddam";
char s2[20];
int i=0,len=0,j=0;

//strrev(s1);

//printf("%s\n",s1);


while (s1[i]!='\0')
{
    i++;
    len++;
}
for ( j = 0, i=len-1; i>=0 ;i--, j++)
{
    s2[j] = s1[i];
}
s2[j]='\0';
printf("%s",s2);




getch();    
}