/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given a positive integer `n`. Print a square of size `n` consisting of the numbers as
 *	follows: First line from 1 to `n`, second from `n + 1` to `2n`, etc.
 *	
 *	Solution:
 *	
 *	Create a counter variable. Run a loop and assign the value of the counter
 *	to each element and increment it after each iteration.
 *
 *	Alternatively, you can observe that each element can be
 *	calculated using the formula `n * (i - 1) + j` and use it
 *	to assign values to the elements.
 *
 */

#include <stdio.h>

int main() {
	int n, cnt = 1;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", cnt);
			cnt++;
		}
		printf("\n");
	}
}
