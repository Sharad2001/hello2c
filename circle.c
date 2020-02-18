#include<stdio.h>
#include<conio.h>

void main()
{
int gd=DETECT, gm;
initgraph(&gd, &gm, "C:\Turbo\TC\BGI" );

circle(500,100,50);
rectangle(100,50,350,150);
ellipse(300,300,0,360, 100,50);
line(100,200,540,200);

getch();
closegraph();
}
