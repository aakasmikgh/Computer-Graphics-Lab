#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<graphics.h>

int x1,x2, y2,mx, my,depth;
int yl;
void draw();
void trans();
int main()
{
 int gd=DETECT, gm, c;
 initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
 printf("\n\t\t\t3D Translation\n");
 printf("\nEnter 1st top value(x1,y1):");
 scanf("%d%d",&x1,&yl);
 printf("\nEnter right bottom value (x2,y2):");
 scanf("%d%d",&x2,&y2);
 depth=(x2-x1)/4;
 mx=(x1+x2)/2;
 my=(yl+y2)/2;
 draw();
 trans();
 getch();
 cleardevice();
 getch();
  }
  void draw()
 {
   bar3d(x1,yl,x2,y2,depth,7); outtextxy(x1+50,yl-15,"Object");
   }
  void trans()
  {
    int a1, a2, b1, b2, dep, x, y;
    printf("Enter the Translation Distances (tx,ty): ");
    scanf("%d%d", &x,&y);
    a1=x1+x;
    a2=x2+x;
    b1=yl+y;
    b2=y2+y;
    dep=(a2-a1)/4;
    bar3d(a1, b1, a2, b2, dep, 7);
    outtextxy(a1+50,b1-15,"Image");
    setcolor(15);
    draw();
    }
