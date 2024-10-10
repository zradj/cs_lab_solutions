/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given a sequence represented by: `x_i = 2 ∗ i + 1`
 *	So, the elements of the sequence are [3, 5, 7, 9, ….]
 *	Write a program to find out the sum and the product of the first n elements of the sequence
 *	given an integer in range `[1, ∞)`.
 *
 *	Solution:
 *
 *	Use a `for` loop to iterate `i` from 1 to `n`. In each iteration, calculate the `i`-th element using the formula given.
 *	Update the sum and the product of all elements from the 1st to the `i`-th element in each iteration.
 *
 */

#include <stdio.h>

int main() {
	int n, sum = 0, xi;
	long long product = 1;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		xi = 2 * i + 1;
		sum += xi;
		product *= xi;
	}

	printf("%d\n", sum);
	printf("%lld\n", product);

	return 0;
}
