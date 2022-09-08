#include <stdio.h>
int main()
{

    int choice;
    float tem, convertem;
    printf("temparcar conversion menu \n");
    printf(" 1 : farenhight to celcish tem ?\n");
    printf(" 2 : celcish to farenhight tem ?\n");
    printf("enter yur choice = :   ");
    scanf("%d", &choice);

    switch (choice)
 {
    case 1:
    {
        printf("enter frenhight tem =: ");
        scanf("%f", &tem);
        convertem = (tem - 32) / 1.8;
        printf("celcish temparesh is %f ", convertem);
        break;
    }

    case 2:
    {
        printf("enter celcish tem =: ");
        scanf("%f", &tem);
        convertem = (1.8 * tem) + 32;
        printf("farenhight temparesh is %f ", convertem);
        break;
    }
    default:
    {

        printf("not a chartor option ");
    }
 }  

    getch();
}
