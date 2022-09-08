#include<stdio.h>
int main(){

int n[3][3],i,j,sum=0,row,col;

printf("Enter rows and colums matrix = : ");
scanf("%d%d",&row,&col);

printf("Enter matrix = : ");
  for ( i = 0; i < row; i++)
  {
      for ( j = 0; j < col; j++)
      { printf("[%d][%d] = ",i,j);
        scanf("%d",&n[i][j]);
      }
  }
      printf("\n");
  for ( i = 0; i < row; i++)
  {
      for ( j = 0; j < col; j++)
      {
          printf("%d ",n[i][j]);
      }
      printf("\n");
  }
  
  
   printf("sum of diagonal elements = "); 

  for ( i = 0; i < row; i++)
  {
      for ( j = 0; j < col; j++)
      {
        if (i==j)
        {  
            sum=sum+ n[i][j];
        }
        
      }
             
  }
      printf("%d ",sum);     
  
  
  
  
    getch();
}