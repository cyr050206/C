#include <graphics.h>
#include <math.h>

#define PI 3.14159265

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // Adjust the path as needed

    int x = getmaxx() / 2;
    int y = getmaxy() / 2;
    int radius = 50;

    while (!kbhit()) {
        cleardevice(); // Clear the screen

        // Calculate new position for the circle
        float angle = (float) i * 0.02; // Adjust the rotation speed
        int newX = x + radius * cos(angle);
        int newY = y + radius * sin(angle);

        // Draw the circle at the new position
        circle(newX, newY, radius);

        delay(50); // Adjust the delay to control rotation speed
        i++;
    }

    closegraph();
    return 0;
}
