#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *file;
    char name[20];
    int age, phonenumber, i, n;

    file = fopen("student.txt", "a");

    if (file == NULL)
    {
        printf("file is opened");
    }
    else
    {
        printf("file is opened\n");

        printf("enter of student number :");
        scanf("%d",&n);

        for (i = 1; i <= n; i++)
        {
            printf("enter student name:\n");
            gets(name);

            printf("enter student age:");
            scanf("%d",&age);

            printf("enter student phone number:");
            scanf("%d",&phonenumber);


            fprintf(file, "\n%s\t%d\t%d\t", name, age, phonenumber);

           
        }
    

             fclose(file);


       
    }


     getch();


}
