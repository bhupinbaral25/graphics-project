#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string>
using namespace std;
int boat(int x1,int y1,int x2)
{
    setcolor(WHITE);
   int points[]={x1,y1,x1+30,y1+20,x2-30,y1+20,x2,y1,x2-20,y1+40,x1+20,y1+40};
   setfillstyle( SOLID_FILL,RED);
  fillpoly(6, points);
  return 0;
}

//water
int water(int x1,int y1,int x2,int y2)
{
  int points[]={x1,y1,x2,y1,x2,y2,x1,y2};
  //setfillstyle( SOLID_FILL,BLUE);
  fillpoly(4, points);
  return 0;

}
int ground(int x1,int y1,int x2,int y2)
{
  int points[]={x1,y1,x2,y1,x2,y2,x1,y2};
  //setfillstyle( SOLID_FILL,GREEN);
  //fillpoly(4, points);
  return 0;

}
int body()
{
    setbkcolor(YELLOW);
    //ground(0,640,300,750);
    //ground(900,640,1400,750);
  //  water(300,665,900,750);
}

void notg(int x,int y,int r)
{
    int i;
    for(i=0;i<r;i++)
    {
    line(x,y,x+30,y);
    line(x,y,x+15,y+30);
    line(x+30,y,x+15,y+30);
    circle(x+15,y+33,3);
    line(x+15,y,x+15,y-10);
    line(x-10,y-30,x-10,y+700);
    line(x+15,y+30,x+15,y+700);
    line(x+15,y-10,x-10,y-10);
    x=x+50;
    }
}
void andgate(int x,int y,int r)
{
    int i;
    for(i=0;i<r;i++)
    {
    arc(x,y,-90,90,35);
    line(x,y-35,x,y+35);
    line(x+35,y,x+100,y);
    y=y+100;
}}
void orgate(int x,int y)
{
    arc(x,y,-35,35,60);
    arc(x+48,y+36,30,90,70);
    arc(x+48,y-36,-90,-30,70);
    line(x+106,y,x+200,y);
}
void out(int x,int y,int m,int s,char*p)
{
    outtextxy(x,y+50,"output is:");
    outtextxy(x+(s*m),y+100,p);
}
int main()
{

int gd = DETECT, gm;
int m=0,s=50;
string  str[] = "";

initgraph(&gd, &gm, " ");
DWORD screenWidth=GetSystemMetrics(SM_CXSCREEN);
DWORD screenHeight=GetSystemMetrics(SM_CYSCREEN);
initwindow(screenWidth,screenHeight," ",1,1);
while(1)
{
setcolor(LIGHTBLUE);
break;

}
notg(200,50,3);
andgate(500,150,4);
orgate(500,600);
body();
//out(200,300,m,s,"A'B'C'+");
m++;
s=s-5;
//out(200,300,m,s,"AB+");
m++;
s=s-5;
//out(200,300,m,s,"ABCD");
m++;
s=s-3;
for(int i =0;i<4;i++)
{
    //str[i]="A";
   // std::cout<<str[i];
}
getch();
return 0;
closegraph();
}


