#include <stdio.h>
 
void drawCircle(int r)
{
    // Consider a rectangle of size N*N
    int N = 2*r+1;
 
    int x, y;  // Coordinates inside the rectangle
 	int i , j;
    // Draw a square of size N*N.
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            // Start from the left most corner point
            x = i-r;
            y = j-r;
 
            // If this point is inside the circle, print it
            if (x*x + y*y <= r*r+1 )
                printf(".");
            else // If outside the circle, print space
                printf(" ");
            printf(" ");
        }
        printf("\n");
    }
}
 
// Driver Program to test above function
int  main()
{
    drawCircle(4);
    return 0;
}
