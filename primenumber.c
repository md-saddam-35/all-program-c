#include <stdio.h>
int main()
{

  int num, count = 0, i;
  printf("enter any number= : ");
  scanf("%d",&num);

  for (i = 2; i < num; i++)
  {
    if (num % i == 0)

    {
      count++;
      break;
    }
  }
   if (count == 0)
  
    printf(" prime number \n");
  
  else 
      printf ("not prime number \n");


  
  
}  getch();
