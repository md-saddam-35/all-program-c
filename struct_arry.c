#include<stdio.h>
struct u
{
char neme[10];
int roll;
float salary;

};


int main(){
int i,n;
struct u s[100];

printf("enter how meny number = : ");
scanf("%d",&n);

for ( i = 0; i < n; i++)
{
    printf("\nenter parson =  :%d ",i+1);

    printf("\nenter neme : ");
    fflush(stdin);
    gets(s[i].neme);

    printf("enter roll : ");
    scanf("%d",&s[i].roll);

    printf("enter salary : ");
    scanf("%f",&s[i].salary);

}

printf("\n\n");

for ( i = 0; i < n; i++)
{
 printf(" enter parson =:%d \n",i+1);

        printf("  neme = %s\n",s[i].neme);
   
        printf("  roll = %d\n",s[i].roll);
   
        printf("salary = %f\n\n",s[i].salary);
   

}

 getch();
    //return 0;
}