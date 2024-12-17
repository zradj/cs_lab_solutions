/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given two integers `n` and `m` followed by a matrix of the size `n * m`. Find
 *	the transpose of the given matrix.
 *	
 *	Solution:
 *	
 *	Transpose of a matrix is essentially the swap of the columns with the rows.
 *	Thus, to solve this problem, we first read the matrix and write the elements row-by-row.
 *	After that, we print each column in the form of rows.
 *
 */

#include <stdio.h>

int main() {
	int n, m, i, j;
	scanf("%d%d", &n, &m);
	
	int nums[n][m];
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &nums[i][j]);
	
	for (j = 0; j < m; j++) {
		for (i = 0; i < n; i++)
			printf("%d ", nums[i][j]);
		printf("\n");
	}
}
