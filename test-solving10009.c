#include <stdio.h>

int main()
{

    
    char name[30];
    float sa;
    double se,total;
    gets(name);
    scanf("%f %lf",&sa,&se);

total= sa+(se*15)/100;

printf("TOTAL = R$ %2.lf\n",total);
    return 0;
}