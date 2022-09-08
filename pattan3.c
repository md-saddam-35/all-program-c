#include <stdio.h>
int main()
{

  int n, row, colam;
  printf("enter n = ");
  scanf("%d", &n);

  for (colam = 1; colam <= n; colam++)
  {
    for (row = 1; row <= colam; row++)
    {
      printf("#");
      // printf("%c ", colam+64 );
    }
    printf("\n");
  }

  for (colam = n - 1; colam >= 1; colam--)
  {
    for (row = 1; row <= colam; row++)
    {
      printf("#");
      // printf("%c ",colam+64);
    }
    printf("\n");
  }

  getch();
}