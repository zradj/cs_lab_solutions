/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	---
 *	
 *	Solution:
 *	
 *	---
 *
 */

#include <stdio.h>

int main() {
	int n, m, i, j, k;
	scanf("%d%d", &n, &m);

	int nums[n][m];
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &nums[i][j]);
	
	scanf("%d", &k);
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%d ", nums[i][j] * k);
		printf("\n");
	}
}
