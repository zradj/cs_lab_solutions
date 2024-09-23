/*
 *	Solution:
 *
 *	If the distance between the point [x, y] and the
 *	circle center [x0, y0] is greater than the radius
 *	of the circle, the point [x, y] is outside the circle.
 *	If the distance is equal to the radius, then the point
 *	is on the circle. Finally, if the distance is smaller than
 *	the radius, the point is inside the circle.
 *
 */

#include <stdio.h>
#include <math.h>

int main() {
	/* `dist` -- distance */
	double x, y, x0, y0, r, dist;
	scanf("%lf %lf %lf %lf %lf", &x, &y, &x0, &y0, &r);

	/* Formula of the distance between two points from school mathematics. */
	dist = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));

	if (dist > r)
		printf("Outside\n");
	else if (dist == r)
		printf("On\n");
	else
		printf("Inside\n");
}
