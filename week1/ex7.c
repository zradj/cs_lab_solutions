/*
 *	Solution:
 *
 *	If the diameter (2 * radius) is bigger than any of
 *	the box's dimensions, then it is impossible to send
 *	the basketball using this box. Otherwise, it is possible.
 *
 */

#include <stdio.h>

int main() {
	double w, l, h, r, d;
	scanf("%lf %lf %lf %lf", &w, &l, &h, &r);

	d = r * 2;

	if (d > w || d > l || d > h)
		printf("Not OK\n");
	else
		printf("OK\n");
}
