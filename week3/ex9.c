/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *	
 *	Taylor series or Taylor expansion of a function is an infinite sum of the terms that 
 *	are expressed in terms of the function's derivatives at a single point. There are some 
 *	commonly used Taylor Series. 
 *	Given a floating-point value `x` and a positive integer `n`. Find the sin(x) by applying Taylor 
 *	series for sine and use n as the number of terms to be accumulated. 
 *
 *	Solution:
 *
 *	---
 *
 */

#include <stdio.h>
#include <math.h>

int main() {
	double x, sinx, term;
	int n, i = 2;
	scanf("%lf %d", &x, &n);

	sinx = term = x;
	int sign = 1;

	while (i <= n) {
		term = (term * x * x) / ((2 * i - 1) * (2 * i - 2));
		sign = -sign;
		sinx += sign * term;
		i++;
	}

	printf("Taylor Series: %.3lf\n", sinx);
	printf("math.h: %.3lf\n", sin(x));

	return 0;
}
