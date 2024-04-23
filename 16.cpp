#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main(){
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C://TC//BGI");
for(i=0;i<=400;i++){
cleardevice();
circle(100+i,100,50);
delay(10);
}
getch();
closegraph();
}


