/* This program will  reflect an object ( triangle ) about X- axis, Y- axis and Y=X axis */

#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int gd=DETECT,gm;
int i,xmid,ymid,x1,y1,x2,y2,x3,y3,x,y,dy,dx,p,gap=50,temp,option;
int x1dash,x2dash,x3dash,y1dash,y2dash,y3dash;
double theta;
float m;
char str[5];
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");

printf("Enter first co-ords of the triangle\n");
scanf("%d %d",&x1,&y1);
printf("Enter second co-ords of the triangle\n");
scanf("%d  %d",&x2,&y2);
printf("Enter third co-ords of the triangle\n");
scanf("%d  %d",&x3,&y3);

xmid= getmaxx()/2;
ymid= getmaxy()/2;
line(5,ymid,getmaxx()-5,ymid);
line(xmid+3,5,xmid+3,getmaxy()-5);

for( i= xmid+gap;i<getmaxx()-5;i=i+gap)
{
outtextxy(i,ymid-3,"|");
itoa(i-xmid,str,10);
outtextxy(i,ymid+3,str);
}
for( i= ymid-gap;i>5;i=i-gap)
{
outtextxy(xmid,i,"-");
itoa(ymid-i,str,10);
outtextxy(xmid+5,i,str);

}
for( i= xmid-gap;i>5;i=i-gap)
{
outtextxy(i,ymid-3,"|");
itoa(-(xmid-i),str,10);
outtextxy(i-6,ymid+3,str);

}
for( i= ymid+gap;i<getmaxy()-5;i=i+gap)
{
outtextxy(xmid,i,"-");
itoa(-(i-ymid),str,10);
outtextxy(xmid+8,i,str);
}
line(x1+xmid,ymid-y1,x2+xmid,ymid-y2);
line(x2+xmid,ymid-y2,x3+xmid,ymid-y3);
line(x3+xmid,ymid-y3,x1+xmid,ymid-y1);

setcolor(255);
printf("Reflection about \n");
printf("X axis :  1\n");
printf("Y axis : 2\n");
printf("X=Y axis : 3\n");
printf("Exit : 4\n");
printf(" Enter the option (1-4):");
scanf("%d",&option);
switch( option)
{
case 1:  y1=-y1; y2=-y2;y3=-y3; break;

case 2:  x1=-x1;x2=-x2;x3=-x3;break;

case 3:  y1=-y1; y2=-y2;y3=-y3;
     theta= ((double) 90 *3.14f )/(double)180;
    x1dash=x1*cos(theta)-y1*sin(theta);
    x2dash=x2*cos(theta)-y2*sin(theta);
    x3dash=x3*cos(theta)-y3*sin(theta);
    y1dash=x1*sin(theta)+y1*cos(theta);
    y2dash=x2*sin(theta)+y2*cos(theta);
    y3dash=x3*sin(theta)+y3*cos(theta);
    x1=x1dash;x2=x2dash;x3=x3dash;
    y1=y1dash;y2=y2dash;y3=y3dash;
	break;

}

line(x1+xmid,ymid-y1,x2+xmid,ymid-y2);
line(x2+xmid,ymid-y2,x3+xmid,ymid-y3);
line(x3+xmid,ymid-y3,x1+xmid,ymid-y1);

getch();
closegraph();
}


