#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void startend(int x,int y,char*a)
{
    ellipse(x,y+20,0,360,60,20);
    outtextxy(x-18,y+10,a);
}
void initibox(int x, int y)
{
  rectangle(x-98,y+77,x+102,y);
  outtextxy(x-38,y+5,"A=0");
  outtextxy(x-48,y+22,"Q=DIVIDEND");
  outtextxy(x-58,y+42,"M=DIVISIOR");
  outtextxy(x-38,y+60,"COUNT=N");

}

 void arro(int x,int y,int z)
 {

     int temp1x,temp2x,temp1y,temp2y;
     if(z==0)
     {
         temp1x=x-8;
         temp2x=x+8;
         temp1y=y-10;
         temp2y=y-10;
     }


     else if(z==1)
     {
         temp1x=x-8;
         temp2x=x-8;
         temp1y=y-10;
         temp2y=y+10;

     }

     else if(z==2)
     {

     temp1x=x+8;
     temp2x=x+8;
     temp1y=y-10;
     temp2y=y+10;
     }

    line(temp1x,temp1y,x,y);
    line(temp2x,temp2y,x,y);
 }
void conc(int x,int y,int p,char*a,char*b)
{
   if(p==1)
   {
      line(x+52,y+45,x+152,y+45);
      outtextxy(x+60,y+25,"YES");
      outtextxy(x-70,y+25,"NO");
   }
  line(x,y,x-48,y+45);
  line(x,y,x+52,y+45);
  line(x+52,y+45,x,y+90);
  line(x-48,y+45,x,y+90);
  line(x-48,y+45,x-148,y+45);
  outtextxy(x-23,y+26,a);
  outtextxy(x-18,y+45,b);
  outtextxy(x-70,y+25,"NO");
}
void amrectangle(int x,int y,int z,char*a)
{
if(z==3)
{
    rectangle(x-248,y+27,x-148,y+59);
    rectangle(x+152,y+27,x+252,y+59);
    outtextxy(x-240,y+35,a);
    outtextxy(x+160,y+35,a);
    line(x-198,y+59,x-198,y+108);
  line(x+198,y+59,x+198,y+108);
}
if(z==2)
{
   rectangle(x-248,y+27,x-148,y+59);
   outtextxy(x-240,y+35,a);
   line(x-198,y+59,x-198,y+108);
}
if(z==1)
{
 rectangle(x+152,y+27,x+252,y+59);
  outtextxy(x+160,y+35,a);
  line(x+198,y+59,x+198,y+108);
  }
}
void reccount(int x,int y,int sz) //sz is for size of ractangle
{
    rectangle(x-100,y,x+100,y+sz);
    outtextxy(x-72,(y-5+sz/2),"COUNT <-- COUNT - 1");
    line(x,y-20,x,y);
    line(x-198,y,x-198,y+15);
    line(x+198,y,x+198,y+15);
    line(x-198,y+15,x-100,y+15);
    line(x+198,y+15,x+100,y+15);
    line(x,y+sz,x,y+sz+30);
    line(x-8,y+sz+20,x,y+sz+30);
    line(x+8,y+sz+20,x,y+sz+30);
}
void returnline(int x,int y,int wh)
{
    line(x-48,y+45,x-270,y+45);
    line(x-270,y+45,x-270,y-wh);
    line(x-270,y-wh,x,y-wh);
}

int main()
{
  int gd = DETECT, gm,p,q=2,t=40,d=500,i=30;
  int left=2,right=1,down=0,both=3;
  initgraph(&gd, &gm, " ");

DWORD screenWidth=GetSystemMetrics(SM_CXSCREEN);
DWORD screenHeight=GetSystemMetrics(SM_CYSCREEN);
initwindow(screenWidth,screenHeight," ",1,1);
p=450;
startend(p+2,q,"start");
delay(d);
line(p,q+41,p,q+70);
arro(p,q+70,down);
delay(d);
conc(p,q+70,1,"    I S ","  A < 0 ");
arro(p+152,q+115,right);
arro(p-148,q+115,left);
amrectangle(p,q+70,both,"left shift AQ");
delay(d);
amrectangle(p,q+150,left,"  A <-- A + M");
delay(d);
amrectangle(p,q+150,right,"  A <-- A - M");
delay(d);
arro(p-198,q+178,down);
arro(p+198,q+178,down);
line(p-198,q+258,p+198,q+258);
delay(d);
line(p,q+258,p,q+280);
arro(p,q+280,down);
conc(p,q+280,1,"    I S ","  A < 0 ");
arro(p+152,q+325,right);
arro(p-148,q+325,left);
delay(d);
amrectangle(p,q+280,left,"  Q0 =  1");
delay(d);
amrectangle(p,q+280,right,"  Q0  =  0");
delay(d);
reccount(p,q+390,t);
delay(d);
arro(p,q+390,down);
arro(p+100,q+405,left);
arro(p-100,q+405,right);
conc(p,q+t+418,0,"     IS  ","CONT=0" );
delay(d);
returnline(p,q+t+418,405);
arro(p,q+53,right);
delay(d);
line(p,q+t+508,p,q+t+530);
arro(p,q+t+530,down);
conc(p,q+t+530,1,"    I S ","  A < 0 ");
delay(d);
outtextxy(p+10,q+t+510,"Yes");
delay(d);
amrectangle(p,q+t+530,left,"  A <-- A + M");
arro(p-148,q+t+575,left);
line(p-198,q+t+640,p-60,q+t+650);
arro(p-60,q+t+650,right);
line(p+152,q+t+575,p+152,q+t+650);
delay(d);
line(p+152,q+t+650,p+60,q+t+650);
arro(p+58,q+t+650,left);
delay(d);
startend(p,q+t+630," END ");
delay(d);
outtextxy(p+220,q+t," B.");
delay(50);
outtextxy(p+240,q+t,"H.");
delay(50);
outtextxy(p+260,q+t,"U.");
delay(50);
outtextxy(p+280,q+t,"P.");
delay(50);
outtextxy(p+300,q+t,"I.");
delay(50);
outtextxy(p+320,q+t,"N.");
delay(50);
outtextxy(p+340,q+t,"   ");
delay(50);
outtextxy(p+360,q+t," B.");
delay(50);
outtextxy(p+380,q+t," A.");
delay(50);
outtextxy(p+400,q+t,"R.");
delay(50);
outtextxy(p+420,q+t,"L ");
getch();
return 0;

}
