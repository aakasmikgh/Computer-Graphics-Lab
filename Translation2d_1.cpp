#include<stdio.h>
#include<graphics.h>
int graDriver=DETECT,graMode;
int n,xs[100],ys[100],i,xshift,yshift;

void DrawFn();
void translate();

int main()
{
  printf("Enter number of sides of polygon: ");
  scanf("%d",&n);
  printf("Enter co-rdinates: x,y for each vertex ");
  for(i=0;i<n;i++)
  scanf("%d%d",&xs[i],&ys[i]);
  printf("Enter distances for translation (in x and y directions): ");
  scanf("%d%d",&xshift,&yshift);
  initgraph(&graDriver,&graMode,"C:\\TURBOC3\\BGI\\");
  cleardevice();
  //drawing original polygon in RED color
  setcolor(RED);
  DrawFn();
  //Doing translation
  translate();
  //drawing translated polygon in BLUE color
  setcolor(WHITE);
  DrawFn();
  getch();
}

void DrawFn()
{
for(i=0;i<n;i++)
 {
 line(xs[i],ys[i],xs[(i+1)%n],ys[(i+1)%n]);
 }
}

void translate()
{
for(i=0;i<n;i++)
 {
 xs[i]+=xshift;
 ys[i]+=yshift;
 }
}
