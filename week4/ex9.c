/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given a positive integer `n`. Print a square of size `n` consisting of the numbers as
 *	follows: First column from 1 to `n`, second from `n + 1` to `2n`, etc.
 *	
 *	Solution:
 *	
 *	Note that each element can be calculated using the
 *	formula `i + n * (j - 1)`. Use it to assign values to the elements.
 *
 */

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			printf("%d ", i + n * (j - 1));
		printf("\n");
	}
}
