/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given a circle with the center `[x0, y0]` with the radius `r`
 *	and multiple points `[xi, yi]`, determine whether each of these points is
 *	ON, OUTSIDE, or OUTSIDE the circle.
 *	
 *	Solution:
 *	
 *	See the solution explanation for Problem 10 from Week 2. The only
 *	change that needs to be made is putting the solution in a loop.
 *
 */

#include <stdio.h>
#include <math.h>

int main() {
	double x, y, x0, y0, r, dist;
	scanf("%lf%lf%lf", &x0, &y0, &r);

	/* 
		Normally, scanf returns the number of elements it read.
		However, -1 is returned when scanf encounters the EOF (end-of-file).
		You can use the key combination Control + D to insert an EOF into the console.
	*/
	while (scanf("%lf %lf", &x, &y) != -1) {
		dist = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));

		if (dist > r)
			printf("Outside\n");
		else if (dist == r)
			printf("On\n");
		else
			printf("Inside\n");
	}
}
