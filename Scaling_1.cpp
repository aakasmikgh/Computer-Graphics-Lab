#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main(){
	initwindow(700, 500, "First Sample");
	//line(10, 10, 200, 200);
	float x1,x2,x3,y1,y2,y3,x4,y4,sx,sy;
	printf("enter the coordinate of starting point: ");
	scanf("%f%f",&x1,&y1);
	printf("Enter the coordinates of ending point:");
	scanf("%f%f",&x2,&y2);
	printf("Enter scaling factors sx,sy: \n");
	scanf("%f%f", &sx,&sy);
	setcolor(7);
	printf("%f, %f, %f, %f", x1, x2, y1, y2);
	line((int)x1,(int)y1,(int)x2,(int)y2);
	
//	outtextxy(x2+2,y2+2,"original line");

	x3 = x1*sx;
	y3 = y1*sy;
	x4 = x2*sx;
	y4 = y2*sy;
	setcolor(7);
	line(x3,y3,x4,y4);
//	outtextxy(x3+2,y3+2,"line after rotation");

	
	while (!kbhit( ))
    {
        delay(200);
   	}
}
	
	
