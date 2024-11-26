/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Define a function that will calculate the factorial of a given number.
 *	Use iteration to calculate the factorial.
 *	
 *	Solution:
 *	
 *	Run a loop that multiplies the `res` variable by each number in `[1..n]`.
 *
 */

long long factorial(int n) {
	long long res = 1;
	for (int i = 1; i <= n; i++)
		res *= i;
	return res;
}
