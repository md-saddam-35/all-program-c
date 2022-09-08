#include <stdio.h>
#include <conio.h>
int main()
{

  FILE *file;
  char name[100];

  file = fopen("test.txt", "w");

  if (file == NULL)
  {
    printf("file doesn't exist");
  }

  else
  {

    printf("file is opened\n");

    printf("enter your full name : ");
    gets(name);
    fputs("\n", file);
    fputs(name, file);

    printf("file is writing succsefully\n");
    fclose(file);
  }

  /* opening file for reading */

  file = fopen("test.txt", "r");
  if (file == NULL)
  {
    printf("Error opening file");
  }
  else
  {
    printf("file is opened\n");
    while (!feof(file))
    {
      fgets(name, 30, file);
      printf("%s", name);
    }
    fclose(file);
   
  }
   getch();
}  