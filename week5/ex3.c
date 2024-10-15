/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given an array of integers. Write a program that takes an integer `n`, integer `k`, and
 *	followed by `n` number of integers and print the array `k` element per line and in the reverse
 *	order.
 *
 *	Solution:
 *
 *	Input the number of elements, `k`, and the elements of the array.
 *	To print the array in reverse order, start the for loop with `i = n - 1`.
 *	Print the elements of the array in each iteration.
 *	The condition `(n - i) % k == 0` indicates the end of a line; in other words,
 *	it checks if the number of printed elements is divisible by `k`.
 *	Therefore, when this condition holds true, print a new line.
 *	The expression `n - i` acts as a counter that starts from 1 and increases
 *	with each iteration of the loop. Alternatively, a separate counter variable could also be used.
 *
 */

#include <stdio.h>

int main() {
	int n, k;
	scanf("%d%d", &n, &k);

	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
		if ((n - i) % k == 0) {
			printf("\n");
		}
	}

	printf("\n");

	return 0;
}
