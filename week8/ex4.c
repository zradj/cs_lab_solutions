/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Define a function that takes a circle represented by the central point
 *	`[x_0, y_0]` and radius followed by two floating point numbers that represent
 *	any point. Return -1 if the point is inside the circle, 0 if it is on the circle,
 *	and 1 if it is outside of it.
 *	
 *	Solution:
 *	
 *	Check the solution for Problem 10 from Week 02. The only change needed is
 *	returning different values for each result.
 *
 */

#include <stdio.h>
#include <math.h>

int point_in_circle(double x, double y, double x0, double y0, double r) {
	double dist;

	dist = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));

	if (dist > r)
		return 1;

	if (dist == r)
		return 0;
	
	return -1;
}

int main() {
	double x, y, x0, y0, r;
	scanf("%lf%lf%lf%lf%lf", &x, &y, &x0, &y0, &r);
	printf("%d\n", point_in_circle(x, y, x0, y0, r));
}
