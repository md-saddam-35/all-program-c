#include<stdio.h>
void string(){

char s1[30];
printf("enter string=:");
gets(s1);

strrev(s1);
printf("string revers =:%s\n",s1);
}
//
void sub() {int a,b,sum;
printf("enter tow number =:");
scanf("%d %d",&a,&b);
sum=a+b;
printf("inclde the display function a = %d\n",sum);
}


//main
int main()
{
string();
sub();
array();

getch();

}
//end main
void array ()
{
int array[5],i;
printf("enter elemant = \n");

for ( i = 0; i <5; i++)
{
    scanf("%d",&array[i]);
}

printf("elemant for \n");
for ( i = 0; i < 5; i++)
{
  printf("%d ",array[i]);
 
}
}

    
