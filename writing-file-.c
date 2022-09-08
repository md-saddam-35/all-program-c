#include<stdio.h>
int main(){



char name[20] ="saddam hossain";
int length = strlen(name);
int i;



FILE *file;

  file=fopen("test.txt","w");

if (file==NULL)
{
    printf("file doesn't exist");
}

else
{

printf("file is open");
for ( i = 0; i <length; i++)
{
    fputc(name[i],file);
}
printf("file is writing succsefully");
fclose;

}






    getch();
}