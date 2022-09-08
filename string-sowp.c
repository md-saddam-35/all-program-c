#include<stdio.h>
#include<string.h>
int main(){


char s1[15]= "banladesh";
char s2[15]="india";
char tem[15];


strcpy(tem,s1);
strcpy(s1,s2);
strcpy(s2,tem);


printf("s1 = %s\n",s1);
printf("s2 = %s\n",s2);



getch();
}