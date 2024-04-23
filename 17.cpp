#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main(){
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C://TC//BGI");
for(i=0;i<=170;i++){
cleardevice();
line(-170,222,1000,222);
line(250+i,50,360+i,50);
line(250+i,50,250+i,100);
line(360+i,50,360+i,100);
line(160+i,100,250+i,100);
line(360+i,100,450+i,100);
line(160+i,100,160+i,160);
line(450+i,100,450+i,160);
line(160+i,160,450+i,160);
circle(205+i,190,30);
circle(405+i,190,30);
rectangle(260+i,60,300+i,100);
rectangle(310+i,60,350+i,100);
delay(10);
}
getch();
closegraph();
}
