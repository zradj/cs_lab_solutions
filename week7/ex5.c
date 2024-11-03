/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given a matrix as in Exercise 2. Find the sum of the rows and columns
 *	separately and print them along with the array itself.
 *
 *	Solution:
 *
 *	To print the sum of the elements in each row, we should first print the row itself.
 *	Therefore, use two nested loops for printing rows.
 *	Inner loop will print each row's all elements and sum the elements in that row. After inner loop is done, print row_sum and reset it.
 *	With the outer loop, repeat this process for every row.
 *	In the nested for loops, swap the place of i and j to find the sum of the elements in each column.
 *	Print column_sum and reset it. Repeat this process from j=0 to j=m-1.
 *
 */

#include <stdio.h>

int main() {
	int n, m, row_sum = 0, column_sum = 0;
	scanf("%d%d", &n, &m);
	int arr[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
			row_sum += arr[i][j];
		}
		printf("| %d\n", row_sum);
		row_sum = 0;
	}
	for (int i = 0; i < m; i++) {
		printf("_ ");
	}
	printf("\n");
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			column_sum += arr[i][j];
		}
		printf("%d ", column_sum);
		column_sum = 0;
	}
}