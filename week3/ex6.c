/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given an integer. Remove the zeros from it
 *	and print the resulting number.
 *	
 *	Solution:
 *	
 *	Use mod 10 (% 10) to get the last digit of a number. Use integer
 *	division by 10 (/ 10) to reduce the number by one digit. To add a
 *	digit to a new number, multiply the digit by 1 with the
 *	appropriate number of zeros and add the result to the number.
 *	You should use all of these techniques in a loop. 
 *
 */

#include <stdio.h>

int main() {
	/* `res` -- result. */
	long long n, d, factor = 1, res = 0;
	scanf("%lld", &n);

	while (n != 0) {
		d = n % 10;
		if (d != 0) {
			res += factor * d;
			factor *= 10;
		}
		n /= 10;
	}

	printf("%lld\n", res);
}
