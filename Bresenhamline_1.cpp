#include<graphics.h>
#include <stdio.h>
#include <math.h>

void swap(float* a, float* b){
	float* temp = a;
	a = b;
	b = temp;
}
 
int main( )
{
    float x,y,x1,y1,x2,y2,dx,dy, p;
    int i;
 
	initwindow(1000, 500, "First Sample");
	
	printf("Enter the value of x1 and y1 : ");
    scanf("%f%f",&x1,&y1);
    printf("Enter the value of x2 and y2: ");
    scanf("%f%f",&x2,&y2);
    if (x1 > x2){
    	swap(&x1, &x2);
    	swap(&y1, &y2);
	}
    x=x1;
    y=y1;
    dx = x2-x1;
    dy = y2-y1;
    putpixel (x,y,15);
    p = (2*dy-dx);
    while (x<x2){
    	if (p<0){
    		x=x+1;
    		p=p+2*dy;
		}
		else{
			x=x+1;
			y=y+1;
			p=p+(2*dy)-(2*dx);
			
		}
		putpixel(x,y,15);
		
	}
	while (!kbhit( ))
    {
        delay(200);
   	}
}
	
	
    
