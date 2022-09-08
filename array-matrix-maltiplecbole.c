#include<stdio.h>
int main(){

int a[10][10],b[10][10],result[10][10];
int i,j,r1,r2,c1,c2,sum=0,k;

printf("enter frist row ande colum = ");
scanf("%d%d",&r1,&c1);


printf("enter second row and colum = ");
scanf("%d%d",&r2,&c2);

if (r1!=c2)
{
      printf("not a muitiplication !\t Enter frist row and colum eqle mast be \n");
printf("enter frist row and colume = ");
    scanf("%d%d",&r1,&c1);
printf("enter second row and colume = ");
    scanf("%d%d",&r2,&c2);

}
//frist matrix input
printf("Enter frist matrix = \n");

for ( i = 0; i <r1; i++)
{
    for ( j = 0; j <c1; j++)
    {printf("[%d][%d]=",i,j);
       scanf("%d",&a[i][j]);
    }
    
}
//second matrix input

printf("Enter second matrix = \n");

for ( i = 0; i <r2; i++)
{
    for ( j = 0; j <c2; j++)
    {printf("[%d][%d]",i,j);
       scanf("%d",&b[i][j]);
    }
    
}

//printing frist matrix

printf("frist matrix = \n");

for ( i = 0; i <r1; i++)
{
    for ( j = 0; j <c1; j++)
    {
       printf("%d ",a[i][j]);
    }
    printf("\n");
}

printf("\n");

//printing second matrix

printf("second matrix = \n");

for ( i = 0; i <r2; i++)
{
    for ( j = 0; j <c2; j++)
    {
       printf("%d ",b[i][j]);
    }
    printf("\n");
}
//maltitiplecbole frist matrix 



for ( i = 0; i <r1; i++)
{
    for ( j = 0; j <c2; j++)
    {
       for ( k = 0; k < c1; k++)
       {
        sum=sum + a[i][k] * b[k][j];
       }
       result[i][j] = sum ;
       sum=0;
    }

}


printf("result matrix = \n");

for ( i = 0; i <r1; i++)
{
    for ( j = 0; j <c2; j++)
    {
       printf("%d ",result[i][j]);
    }
    printf("\n");
}

return 0;
}