#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main(){
	initwindow(700, 500, "First Sample");
	float x1,x2,x3,y1,y2,y3,x4,y4,a,t;
	printf("enter the coordinate of starting point:");
	scanf("%f %f",&x1,&y1);
	printf("Enter the coordinates of ending point:");
	scanf("%f %f",&x2,&y2);
	printf("Enter the angle of rotation:");
	scanf("%f", &a);
	setcolor(7);
	line(x1,y1,x2,y2);
    outtextxy(x2+2,y2+2,"original line");
	t=a*(3.14/180);
	printf("%f",t);
	x3 = (x1*cos(t))-(y1*sin(t));
	y3 = (x1*sin(t))+(y1*cos(t));
	x4 = (x2*cos(t))-(y2*sin(t));
	y4 = (x2*sin(t))+(y2*cos(t));
	printf("%f,%f,%f,%f", x3,y3,x4,y4);
	setcolor(7);
	line(x3,y3,x4,y4);
    outtextxy(x3+2,y3+2,"line after rotation");

	
			while (!kbhit( ))
    {
        delay(50);
   	}
	getch();
	closegraph();
}

