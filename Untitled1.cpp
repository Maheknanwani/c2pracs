#include<graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // set color to red
    setcolor(RED);

    // draw a rectangle
    rectangle(100, 100, 200, 200);

    // set color to green
    setcolor(GREEN);

    // draw a circle
    circle(300, 150, 50);

    // set color to blue
    setcolor(BLUE);

    // draw a line
    line(400, 100, 500, 200);

    // set color to yellow
    setcolor(YELLOW);

    // draw a triangle
    int points[] = {600, 100, 650, 200, 550, 200};
    drawpoly(3, points);

    // set color to magenta
    setcolor(MAGENTA);

    // draw a filled ellipse
    fillellipse(750, 150, 50, 100);

    getch();
    closegraph();
    return 0;
}

