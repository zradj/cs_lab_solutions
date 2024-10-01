/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Harmonic series is a special type of infinite series in math.
 *	Write a program that given the number `n`, find the sum with the precision of 3 decimal 
 *	digits.
 *
 *	Solution:
 *
 *	Declare a counter `i`, initialize it to 1 as in the formula it is stated that `i` starts from 1. 
 *	Use a while loop to iterate from `i = 1` to `i = n`.
 *	In each iteration, update the sum using the formula `sum += 1.0 / i`. 
 *	The use of 1.0 ensures that division is performed in floating-point,
 *	preventing integer division errors that would lead to incorrect results.
 *
 */

#include <stdio.h>

int main() {
	int n, i = 1; 
	double sum = 0.0; 
	scanf("%d", &n);

	while (i <= n) {
		/*
			It is crucial to use `1.0` instead of `1`.
			With `1`, C performs integer division
			(since `i` is also an integer) and the result is always 0.
			With `1.0`, `i` is converted to `double`.
		 */
		sum += 1.0 / i;
		i++;
	}

	printf("%.3f\n", sum);

	return 0;
}
