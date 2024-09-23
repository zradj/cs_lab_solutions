/*
 *	Solution:
 *
 *	Multiply all digits that are not zero.
 *
 */

#include <stdio.h>

int main() {
	/* `res` is initiliazed to 1 because 1 in multiplication is the same as 0 in addition. */
	int n, res = 1;
	scanf("%d", &n);

	/* Absolute value of `n`. */
	n = (n < 0 ? -n : n);

	if (n % 10 != 0) res *= n % 10;
	n /= 10;
	if (n % 10 != 0) res *= n % 10;
	n /= 10;
	if (n % 10 != 0) res *= n % 10;

	printf("%d\n", res);
}
