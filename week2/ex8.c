/*
 *	Solution:
 *
 *	According to the Triangle Inequality Theorem, the sum
 *	of any two sides of a triangle is greater than the third side.
 *	If this theorem is violated, then it is not possible to form
 *	a triangle with the given sticks.
 *
 */

#include <stdio.h>

int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a + b > c && a + c > b && b + c > a)
		printf("Possible\n");
	else
		printf("Impossible\n");
}
