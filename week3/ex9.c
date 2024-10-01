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
 *	Declare a variable term for calculating each term and sinx which stores the sum of the terms
 *	compute i=0 as a base case for sinx and term.
 *	In a while loop compute (i)^(-1) by multiplying sign with -1 in each iteration
 *	compute the term by multiplying it with (x * x) /((2*i)*(2 * i + 1)) in each iteration
 *	find the sum by adding the term multiplied with the sign in each iteration
 *	iterate the counter
 *	print your computed sum and also sin(x) computed by math.h function to see their comparison.
 *
 */

#include <stdio.h>
#include <math.h>

int main() {
	double x, sinx, term;
	int n, i = 1;
	scanf("%lf%d", &x, &n);

	sinx = term = x;
	int sign = 1;

	while (i <= n) {
		term = (term * x * x) / ((2 * i + 1) * (2 * i));
		sign = -sign;
		sinx += sign * term;
		i++;
	}

	printf("Taylor Series: %lf\n", sinx);
	printf("math.h: %lf\n", sin(x));

	return 0;
}