/*
 *	Solution:
 *
 *	Use the modulo operator (%) to get the remainder of the division
 *	of x by 2. If the remainder is 0, then the number is odd. Otherwise,
 *	the number is even.
 *
 */

#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);

	/* Ternary operator. If you are confused by this, please see slide 35 in Week 02. */
	printf(x % 2 == 0 ? "Even\n" : "Odd\n");
}
