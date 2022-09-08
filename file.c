#include<stdio.h>
int main()
{

FILE *file;

fopen("test.txt","w");

if (file==NULL)
{
    printf("file doesn't exist");
}

else
{

printf("file is open");


}



return 0;
}