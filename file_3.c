#include<stdio.h>
int main(){

FILE *file;
char name[100];
int age;
float sallry;

  file=fopen("test1.txt","w");

if (file==NULL)
{
    printf("file doesn't exist");
}

else
{

printf("file is opened\n");

printf("enter your full name : ");
gets(name);
printf("enter your age : ");
scanf("%d",&age);
printf("enter sallry:");
scanf("%f",&sallry);

fprintf(file,"name is: %s\nage is: %d \n",name,age);
fprintf(file,"sallry is : %.2f\n",sallry);
fclose(file);

}





    getch();
}