#include<stdio.h>

struct1(){

struct parson
 {
     
int age;
float salary;
};

struct parson parson2,parson1;
parson1.age=27;
parson2.salary=1275.50;


printf("age = %d\n",parson1.age);
printf("salary = %f\n",parson2.salary);

printf("\n");

parson2.age=25;
parson2.salary=13574.50;
printf("age = %d\n",parson2.age);
printf("salary = %f\n",parson2.salary);




}

//////////////
int main(){
struct1();

getch();
}
/////////////




