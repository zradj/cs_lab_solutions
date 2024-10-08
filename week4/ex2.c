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
	int a, b, k;
	long long sum = 0;
	scanf("%d%d%d", &a, &b, &k);

	/*
		If you do not need some part in the `for` loop,
		you can skip it by leaving that part empty. In this case,
		`a` is already declared and has the necessary starting
		value, so the first part (where variables are
		usually declared) is skipped.
	 */
	for (; a <= b; a++)
		if (a % k == 0)
			sum += a;
	
	printf("%lld\n", sum);
}
