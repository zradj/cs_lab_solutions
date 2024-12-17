/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given a square matrix as in Problem 1. Check if it is an identity matrix or not.
 *	
 *	Solution:
 *	
 *	For each non-diagonal element of the matrix (`i` != `j`), we check if it is equal to 0.
 *	For each diagonal element of the matrix (`i` == `j`), we check if it is equal to 1.
 *	If at least one element does not comply with the conditions above, the matrix
 *	is not an identity matrix.
 *
 */

#include <stdio.h>

int main() {
	int n, x, f = 1;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &x);
			if ((i == j && x != 1) || (i != j && x != 0)) f = 0;
		}
	}

	printf(f == 1 ? "Yes\n" : "No\n");
}
