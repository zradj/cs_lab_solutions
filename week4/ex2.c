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
 *	Use a `for` loop to iterate through the range. Check if each element is
 *	divisible by `k` without a remainder and add it to the `sum` variable
 *	if it is. Swap `a` and `b` if `a > b`.
 *
 */

#include <stdio.h>

int main() {
	int a, b, k;
	long long sum = 0;
	scanf("%d%d%d", &a, &b, &k);

	if (a > b) {
		int c = a;
		a = b;
		b = c;
	}

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
