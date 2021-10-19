#include<iostream>
#include<stdio.h>
#include<graphics.h>
int main()
{
    char a[50];
    double n1, n2, answer;
    std::string op;

    outtextxy(10,10,"Enter first num, operation, and second num");
    std::cin>>n1>>op>>n2;

    if(op == "+") answer = n1+n2;
    else if(op == "-") answer = n1-n2;
    else if(op == "*") answer = n1*n2;
    else if(op == "/") answer = n1/n2;

    settextstyle(8, HORIZ_DIR, 5);
    sprintf(a, "%.2lf %s %.2lf=%.2lf", n1, op.c_str(),n2,answer);

    int midX=getmaxx()/2;
    int midY=getmaxy()/2;
    int width=textwidth(a);
    int height=textheight(a);

    outtextxy(midX-width/2, midY-height/2, a);


    getch();
    closegraph();
    return 0;
}
