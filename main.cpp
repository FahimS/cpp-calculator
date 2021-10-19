#include<stdio.h>
#include"dc.h"
#include<stdlib.h>
#include"calculator.h"
int main()
{
    mc:printf("\n\n\n\t\tWhat do you want to see ??");
    printf("\n\t\t\t1. Clock\n\t\t\t2. Calculator\n");
    printf("\n\nNow Press --- ");
    int press;
    scanf("%d",&press);
    if(press==1)
    {
        system("cls");
        mywatch();
    }
    else if(press==2)
    {
        system("cls");
        cal();
    }
    else
    {
        system("cls");
        goto mc;

    }
    return 0;
}
