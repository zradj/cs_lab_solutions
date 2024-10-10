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
 *	Use a `for` loop to iterate from `i = 1` to `i = n`.
 *	In each iteration, update the sum using the formula `sum += 1.0 / i`.
 *	The use of 1.0 ensures that division is performed in floating-point,
 *	preventing integer division errors that would lead to incorrect results.
 *
 */

#include <stdio.h>

int main() {
	int n;
	double sum = 0.0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += 1.0 / i;
	}
	printf("%.3f\n", sum);

	return 0;
}
