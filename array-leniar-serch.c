#include<stdio.h>

int main()

{ int number,i,count=0;
    int m=-1;
    printf("\nenter haw mene numner :");
    scanf("%d",&number);

    int arry[20]={1,2,3,4,5,6,7,};

    for(i=0;i<=7;i++)
    {
    
    if(number == arry[i])

      m=i;

    }

    if (m== -1)
    {
        
       printf("index number not fund\n\n");   

    }
    else
    printf("index number is :%d\n\n",m+1);

   

   
     
    return 0;
}