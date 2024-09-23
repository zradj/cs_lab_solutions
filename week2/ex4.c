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

	if (d < 0) {
		printf("No roots\n");
	} else if (d == 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		printf("%lf\n", x1);
	} else {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("%lf\n%lf\n", x1, x2);
	}
}
