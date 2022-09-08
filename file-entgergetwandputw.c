#include<stdio.h>
int main()
{
FILE *fp;
int n,num;
fp=fopen("test1.txt","w");
printf("enetr any number ");
scanf("%d",&num);

putw(num,fp);
fclose(fp);

//printf("%d\n",num);


fp=fopen("test1.txt","r");
n=getw(fp);
printf("%d\n",n);




    return 0;
}