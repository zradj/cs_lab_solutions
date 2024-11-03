/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given a square matrix as in Exercise 1. Find the sum of the elements of both
 *	diagonals.
 *
 *	Solution:
 *
 *	Main diagonal elements are the elements with column number equal to row number: arr[i][i].
 *	Similarly the other diagonal's elements can be expressed as arr[i][n-1-i].
 *	To calculate the sum of both diagonal elements, we can use a single for loop to iterate through the rows.
 *	If n is an odd integer, the middle element arr[n/2][n/2] will be equal to arr[i][n-1-i] and will be counted twice.
 *	Consider this case by subtracting one instance of the middle element from the total sum.
 *
 */

#include <stdio.h>

int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	int arr[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		sum += arr[i][i];
		sum += arr[i][n - 1 - i];
	}
	if (n % 2 != 0)
		sum -= arr[n / 2][n / 2];
	printf("%d", sum);
}