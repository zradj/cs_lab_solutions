/*
 *	Solution:
 *
 *	Implement the given formulas directly in the code.
 *	Use conditional statements and x * x for x^2. 
 *
 */

#include <stdio.h>

int main() {
	double x, res;
	scanf("%lf", &x);

	if (x > 0) res = x * x - 2 * x + 3;
	else if (x == 0) res = x - 5;
	else if (x < 0) res = x * x + 2 * x - 3;

	printf("%lf\n", res);
}
