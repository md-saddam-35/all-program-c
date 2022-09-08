#include<stdio.h>

 maximum(int x[])
{
    int i;
    int max=x[0];

for ( i = 1; i <4; i++)
{
   if (max>x[i])
   {
      max=x[i];
   }

}

return max;
}

int main(){
int num[30]={10,20,30,40};
int saddam = maximum(num);
printf("smole number = %d",saddam);
getch();
}