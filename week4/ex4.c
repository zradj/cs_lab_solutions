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
	int n;
	double x, sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lf", &x);
		sum += x;
	}

	printf("%lf\n", sum);
}
