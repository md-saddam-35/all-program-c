#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){

char s1[20];
printf("Enter name :");
gets(s1);

int i=0,len =0;

while (s1[i]!='\0')
{
   i++;
   len ++ ;
}
printf("length = %d",len);

//funcion
//int len = strlen(s1);

//printf("length = %d\n",len);


    getch();
}