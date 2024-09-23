/*
 *	Solution:
 *
 *	Use conditional statements and the modulo
 *	operator (%) to check the divisibility of numbers.
 *
 */

#include <stdio.h>

int main() {
	int x;

	/* Note that you do not need curly brackets ({}) for one-line bodies. */
	if (x % 6 == 0)
		printf("Excellent\n");
	else if (x % 2 == 0 || x % 3 == 0)
		printf("OK\n");
	else
		printf("No\n");
}
