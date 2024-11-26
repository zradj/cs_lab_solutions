/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Define a function that will calculate the greatest common divisor (GCD)
 *	of the given numbers. Use recursion in this solution.
 *	
 *	Solution:
 *	
 *	This problem can be solved using the Euclidean algorithm. According to this algorithm,
 *	the GCD of any two numbers `a`, `b` is equal to the GCD of `b` and the remainder after division
 *	of `a` by `b` (`a % b`). Moreover, the GCD of 0 and any other number `x` is `x`, which is
 *	our base case.
 *
 */

#include <stdlib.h>

int gcd(int a, int b) {
	/* Without the absolute value, the answer can be wrong sometimes (e.g. gcd(-1, -1) = -1). */
	if (b == 0) return abs(a);

	return gcd(b, a % b);
}
