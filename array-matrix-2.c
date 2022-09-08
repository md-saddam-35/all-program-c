#include<stdio.h>
int main(){
    
 int first[10][10],second[10][10],result[10][10];
 int i,j,r1,r2,c1,c2;
    
        printf("enter first row and colum  =:");
        scanf("%d %d",&r1,&c1);

        printf("enter second row and colum  =:");
        scanf("%d %d",&r2,&c2);

while (c1!=r2)
{
            printf("Error !! coulm of frist matrix not equal to enter  first row and colum = ");
            printf(" enter  first row and colum");
            scanf("%d %d",&r1,&c1);

            printf(" enter  second row and colum");
            scanf("%d %d",&r2,&c2);

}
//first matrix input
for ( i = 0; i <r1; i++)
{
    for ( j = 0; j < c1; j++)
    {
    printf("enter first matrix = :");
    printf("[%d][%d] =",i,j);
    scanf("%d",&first[i][j]);
    }
}
printf("\n");

//second matrix input
for ( i = 0; i <r2; i++)
{
    for ( j = 0; j < c2; j++)
    {
    printf("enter  second matrix = :");
    printf("[%d][%d] =",i,j);
    scanf("%d",&second[i][j]);
    }
    
}
printf("\n");

 
//printf first matrix for
 printf("first matrix\n"); 
    for( i = 0; i <r1; i++){

    for ( j = 0; j < c1; j++)
    {
    printf("%d ",first[i][j]);
    }
printf("\n");
}


//printf second matrixfor
printf(" second matrix\n");
    for( i = 0; i <r2; i++){

    for ( j = 0; j < c2; j++)
    {
    printf("%d ",second[i][j]);
    }
printf("\n");
}






getch();
}