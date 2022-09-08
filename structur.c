#include<stdio.h>
#include<string.h>


struct  student
{
char neme[20];
int roll;
float salary;

};
////////////

  m(){
struct  student s[100] ;
int i,n;

printf("enter no.of student = :");
scanf("%d",&n);
printf("enter student roll recod \n\n");

for ( i = 0; i <n; i++)
{
printf("enter neme =:");
    scanf("\n%s",&s[i].neme);
printf("enter roll =:");
    scanf("\n%d",&s[i].roll);
printf("enter salary = :");
    scanf("\n%f",&s[i].salary);

}
    printf("\n\n");
for ( i = 0; i <n; i++)
{
    printf("student neme = %s\n",s[i].neme);
   
    printf("student roll = %d\n",s[i].roll);
    
    printf("student salary = %.2f\n",s[i].salary);
    

}

    
    return 0;
} 
int main()
{
m ();
    
    getch();
}