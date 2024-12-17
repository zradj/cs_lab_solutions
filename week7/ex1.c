/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given an integer n and a two-dimensional array of integers of shape n*n. Find
 *	the sum of elements that are under the main diagonal.
 *
 *	Solution:
 *
 *	Sum of the elements under the main diagonal can be found by summing the elements in each row which has index less than than the row's number: j<i.
 *	In the first row (index=0) there is no element with index less than the row's number; therefore, we start from 2nd row (index=1)
 *	We can achieve this using two nested for loops, where the outer loop variable i starts from 1 and the inner loop variable j iterates from 0 to i-1.
 *	Inside the nested loops find the sum of the elements using sum variable
 *
 */

#include <stdio.h>

int main() {
	int n, sum = 0;
	scanf("%d", &n);
	int arr[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++)
		{
			sum += arr[i][j];
		}
	}
	printf("%d", sum);
}