/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given an integer `n` and `n` other floating-point numbers.
 *	Find the sum of all numbers given by the user.
 *	
 *	Solution:
 *	
 *	Use a loop to scan each number one-by-one and
 *	add it to the separate sum variable.
 *
 */

#include <stdio.h>

int main() {
	int n;
	double x, sum = 0;

	scanf("%d", &n);

	int i = 0;
	while (i < n) {
		scanf("%lf", &x);
		sum += x;
		i++;
	}

	printf("%lf\n", sum);
}
