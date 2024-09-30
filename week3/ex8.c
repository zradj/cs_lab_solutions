/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given a positive number `n`, print the `n`th Fibonacci number.
 *	
 *	Solution:
 *	
 *	Since Fibonacci sequence is defined by `F_n = F_(n-1) + F_(n-2)`,
 *	you should use three variables (two for storing previous Fibonacci numbers,
 *	third for calculating a new one) to generate the Fibonacci sequence.
 *	At the beginning, initialize the first two variables with the values of
 *	`F_1` and `F_2`. Use a loop to generate the subsequent Fibonacci numbers.
 *
 */

#include <stdio.h>

int main() {
	int n;
	long long f1, f2, f3;
	scanf("%d", &n);

	f1 = f2 = f3 = 1;

	if (n == 1)
		printf("1\n");
	else {
		n -= 2;
		int i = 0;
		while (i < n) {
			f1 = f2;
			f2 = f3;
			f3 = f1 + f2;
			i++;
		}
		printf("%lld\n", f3);
	}
}
