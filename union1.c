#include<stdio.h>
 #include<string.h>
/*struct porson
{
    char c[10];
    double d;

};

void saddam(){
  struct  porson p;
p.c = "saddam hossain";
p.d = 01741620335.55;

printf("struct is %s",p.c);
printf("struct is %lf",p.d);
};
*/


union union1
{
   int n;
    
};
union union2
{
    char a;
};

int main(){

union union1  u1;
union union2 u2;
printf("enter  Number :");
scanf("%d",&u1.n);




strcpy(u2.a,"saddam hossain");
printf("union1 = %d\n",u1.n);

printf("union2 %c",u2.a);

//saddam();


return 0;
}