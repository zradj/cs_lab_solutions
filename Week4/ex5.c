/*
 *
 *    Author: Elnama Mammadova
 *
 *    Problem:
 *
 *    There are two runners that run on a road. Write a program that given the initial
 *    coordinates of the runners, and the speeds (size of step) prints the coordinate and time
 *    taken where they will meet or pass each other OR prints NEVER in case, they are running
 *    from each other, or they are running towards the same direction but the one behind has not enough speed.
 *
 *
 *    Solution is provided as comments in the code for better understanding.
 */
#include <stdio.h>

int main()
{
    int x1, v1, x2, v2;
    int time = 1;

    // Input for initial positions and speeds
    scanf("%d %d", &x1, &v1);
    scanf("%d %d", &x2, &v2);

    // Check for cases where they will never meet
    if ((x1 < x2 && v1 <= v2) || (x1 > x2 && v1 >= v2) ||
        (x1 < x2 && v1 < 0 && v2 > 0) || (x1 > x2 && v1 > 0 && v2 < 0))
    {
        printf("NEVER\n");
        return 0;
    }

    // Simulate movement step by step
    for (int x = x1;; x += v1, x2 += v2, time++)
    {
        // Check if they meet
        if (x == x2)
        {
            printf("They will meet at time %d at position %d.\n", time, x);
            return 0;
        }
        // Check if they passed each other without meeting
        if ((x1 < x2 && x > x2) || (x1 > x2 && x < x2))
        {
            printf("They will pass each other at time %d, their positions will be %d and %d\n", time, x, x2);
            return 0;
        }
    }

    return 0;
}
