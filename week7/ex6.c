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
