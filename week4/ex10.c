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
	int a, b, c;

	/*
		If you are confused by this, please see
		the comment in the solution for Exercise 10, Week 3.
	 */
	while (scanf("%d%d%d", &a, &b, &c) != -1) {
		for (; a <= b; a++)
			if (a % c == 0)
				printf("%d ", a);
		printf("\n");
	}
}
