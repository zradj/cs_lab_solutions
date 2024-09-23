/*
 *	Solution:
 *
 *	Implement the formulas directly using sqrt() from `math.h`
 *	for square root. Use conditionals to print the result correctly.
 *
 */

#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, d, x1, x2;
	scanf("%lf %lf %lf", &a, &b, &c);

	d = b * b - 4 * a * c;

	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);

	if (d > 0)
		printf("%lf\n%lf\n", x1, x2);
	else if (d == 0)
		printf("%lf\n", x1);
	else
		printf("No roots\n");
}
