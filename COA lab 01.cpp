#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void startend(int x,int y,char*a)
{
    ellipse(x,y+20,0,360,60,20);
    outtextxy(x-18,y+10,a);
}
 void arro(int x,int y)
 {
    //for down arrow
    line(x-8,y-10,x,y);
    line(x+8,y-10,x,y);
 }

void arri(int x,int y)
 {

 //for right arrow
line(x-8,y-10,x,y);
line(x-8,y+10,x,y);
 }

    void arrl(int x,int y)
    {//for left arrow;
    line(x+8,y-10,x,y);
    line(x+8,y+10,x,y);
    }

void conc(int x,int y)
{
  line(x,y,x-48,y+45);
  line(x,y,x+52,y+45);
  line(x+52,y+45,x,y+90);
  line(x-48,y+45,x,y+90);
}
int main()
{
  int gd = DETECT, gm;

  initgraph(&gd, &gm, " ");
DWORD screenWidth=GetSystemMetrics(SM_CXSCREEN);
DWORD screenHeight=GetSystemMetrics(SM_CYSCREEN);
initwindow(screenWidth,screenHeight," ",1,1);

  startend(300,20,"start");
  line(298,61,298,90);
  arro(298,90);
  rectangle(200,167,400,90);
  outtextxy(260,95,"A=0    Q-1=0");
  outtextxy(250,112,"Q=MULTIFLIER");
  outtextxy(240,132,"M=MULTIFLICAND");
  outtextxy(260,150,"COUNT=N");
  line(298,167,298,210);
  arro(298,210);
  conc(298,210);
  outtextxy(275,236,"CHECK");
  outtextxy(280,255,"Q0Q-1");
  line(298,300,298,365);
  outtextxy(275,320,"00");
  outtextxy(310,320,"11");
  line(250,255,150,255);
  outtextxy(230,235,"01");
  line(350,255,450,255);
  outtextxy(360,235,"10");
  line(450,255,450,300);
  line(150,255,150,300);
  arro(150,300);
  arro(450,300);
  arro(298,365);
  rectangle(100,300,200,330);
  line(150,330,150,385);
  line(150,385,200,385);
  arri(200,385);
  rectangle(400,300,500,330);
  line(450,330,450,385);
  line(450,385,400,385);
  arrl(400,385);
  outtextxy(115,305,"A = A - M");
  outtextxy(415,305,"  A = A + M");
  rectangle(200,365,400,410);
  outtextxy(225,370,"Airthematic Right shift");
  outtextxy(230,390," COUNT=COUNT - 1 ");
  line(298,410,298,450);
  arro(298,450);
  conc(298,450);
  line(298,540,298,585);
  startend(298,585,"End");
  arro(298,585);
  line(250,495,70,495);
  line(70,185,70,495);
  line(70,185,298,185);
  arri(298,185);
  outtextxy(265,488,"COUNT=0");

  rectangle(30,10,540,650);

  getch();
  return 0;

}
