/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Calculate and print the sum of the elements in the range `[a, b]`
 *	that are divisible by `k` without a remainder.
 *	
 *	Solution:
 *	
 *	Use a loop to iterate through the range. Check if each element is
 *	divisible by `k` without a remainder and add it to the `sum` variable
 *	if it is. Swap `a` and `b` if `a > b`.
 *
 */

#include <stdio.h>

int main() {
	int a, b, k, sum = 0;
	scanf("%d%d%d", &a, &b, &k);

	/* Swap `a` and `b` if `a > b` */
	if (a > b) {
		int c = a;
		a = b;
		b = c;
	}

	while (a <= b) {
		if (a % k == 0)
			sum += a;
		a++;
	}
	
	printf("%d\n", sum);
}
