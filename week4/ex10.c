/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given some triplets of integers `a`, `b`, and `c` until EOF.
 *	Calculate and print the sum of the elements in the range `[a, b]`
 *	that are divisible by `c` without a remainder.
 *	
 *	Solution:
 *	
 *	This problem is almost identical to the Exercise 2 from this week.
 *	The only difference is the implementation of reading until EOF.
 *
 */

#include <stdio.h>

int main() {
	int a, b, c;

	/*
		If you are confused by this, please see
		the comment in the solution for Exercise 10, Week 3.
	 */
	while (scanf("%d%d%d", &a, &b, &c) != -1) {
		for (; a <= b; a++)
			if (a % c == 0)
				printf("%d ", a);
		printf("\n");
	}
}
