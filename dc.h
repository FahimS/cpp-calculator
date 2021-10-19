#include<graphics.h>
#include<time.h>

void mywatch()
{
    int i;

   initwindow(700,600,"DIGITAL CLOCK");
   setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(0,0,WHITE);

     setfillstyle(SOLID_FILL,BLUE);
     bar(70,70,600,430);

    floodfill(70,70,BLUE);
    time_t Time;
    struct tm *currentTime;
    char a[100];


   setfillstyle(SOLID_FILL,WHITE);
   floodfill(0,0,WHITE);

    while(1)
    {
        for(i=2;i<=15;i++)
        {
        Time = time(NULL);
        currentTime = localtime(&Time);
        strftime(a, 100, "%I:%M:%S", currentTime);

        setcolor(i);
        settextstyle(3, HORIZ_DIR, 10);
        outtextxy(130, 150, a);

        setcolor(YELLOW);

        strftime(a, 100, "%p", currentTime);
        settextstyle(3, HORIZ_DIR, 2);
        outtextxy(540, 250, a);

        strftime(a, 100, "%a, %d %b, %Y", currentTime);
        settextstyle(3, HORIZ_DIR, 5);
        setcolor(11);
        outtextxy(125, 330, a);

        delay(1000);

        }

   }
     getch();
     closegraph();
}

