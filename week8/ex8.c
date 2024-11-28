/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Define a function that will calculate the factorial of a given number.
 *	Use recursion to calculate the factorial.
 *	
 *	Solution:
 *	
 *	We use the property `n! = n * (n - 1)!` in this solution.
 *
 */

#include <stdio.h>

long long factorial(int n) {
	if (n == 0) return 1;

	return n * factorial(n - 1);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%lld\n", factorial(n));
}
