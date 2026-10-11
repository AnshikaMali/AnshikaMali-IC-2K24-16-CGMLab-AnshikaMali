#include <graphics.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    int dx, dy, steps, i;
    float x, y;
    float x_increment, y_increment;

    cout << "Enter starting point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter ending point (x2 y2): ";
    cin >> x2 >> y2;

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    initgraph(&gd, &gm, "");

    setbkcolor(BLACK);
    cleardevice();

    setcolor(WHITE);

    if (steps == 0)
    {
        putpixel(x1, y1, WHITE);
    }
    else
    {
        x_increment = (float)dx / steps;
        y_increment = (float)dy / steps;

        x = x1;
        y = y1;

        for (i = 0; i <= steps; i++)
        {
            putpixel((int)(x + 0.5), (int)(y + 0.5), YELLOW);

            x = x + x_increment;
            y = y + y_increment;
        }
    }

    setcolor(GREEN);
    outtextxy(20, 20, "DDA LINE DRAWING ALGORITHM");

    getch();
    closegraph();

    return 0;
}