#include<stdio.h>
#include<string.h>
int main(){

char s1[50]= "may name is ";
char s2[40]= "saddam";

int i=0,len=0,j=0;

while (s1[i]!='\0')
{
    i++;
    len++;
}

while (s2[j]!='\0')
{
    s1[len+j]=s2[j];
    j++;
}

printf("  s1 = %s ",s1);






getch();
}