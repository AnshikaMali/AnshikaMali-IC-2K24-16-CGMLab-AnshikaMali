#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    // Set background color
    setbkcolor(BLACK);
    cleardevice();

    // Draw outer border
    setcolor(WHITE);
    rectangle(10, 10, 630, 470);

    // Display title
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    setcolor(WHITE);
    outtextxy(150, 25, "BASIC GRAPHICS PRIMITIVES");

    // Draw a horizontal separator
    setcolor(WHITE);
    line(30, 60, 610, 60);

    // 1. Draw a straight line
    setcolor(YELLOW);
    line(60, 130, 260, 130);

    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    outtextxy(100, 155, "STRAIGHT LINE");

    // 2. Draw a circle
    setcolor(GREEN);
    circle(450, 125, 50);

    setcolor(WHITE);
    outtextxy(420, 195, "CIRCLE");

    // 3. Draw a rectangle
    setcolor(CYAN);
    rectangle(60, 250, 260, 350);

    setcolor(WHITE);
    outtextxy(115, 365, "RECTANGLE");

    // 4. Draw a triangle
    setcolor(RED);
    line(400, 350, 500, 230);
    line(500, 230, 600, 350);
    line(600, 350, 400, 350);

    setcolor(WHITE);
    outtextxy(455, 365, "TRIANGLE");

    // Display closing message
    setcolor(LIGHTGRAY);
    outtextxy(155, 420, "Computer Graphics Lab Assignment");

    // Wait for a key press
    getch();

    // Close graphics window
    closegraph();

    return 0;
}