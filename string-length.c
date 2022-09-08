#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){

char s1[]="md saddam hossain";
int i=0,len=0;
                    //laibriy funtion for length
//int len=strlen(s1);

//printf("length %d",len);

                    // laibriy funtion less length
while (s1[i]!='\0')
{
    i++;
    len++;
}
printf("s1  = %d",len);






    getch();
}