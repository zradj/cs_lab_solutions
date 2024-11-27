/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Define a function that will check the given number to be even or odd. The
 *	function returns true (1) if the given number is even, false (0) otherwise.
 *	Example: isEven(10) -> true. isEven(5) -> false
 *
 *	Solution is provided as comments inside the code.
 *
 */

#include <stdio.h>
 /*
 *	Outside of the main function define integer isEven function - a function that returns an integer.
 *	Declare the variables that will be passed to the function in the argument.
 *	To check the number's parity (if it is even or odd) return n % 2 == 0.
 *	If the equality is correct the function will return 1; otherwise 0.
 *
 */
int isEven(int n) {
	return n % 2 == 0;
}

int main() {
	int n;
	scanf("%d", &n);
	/*
	 * Declare the number n and read it. Pass this number to isEven() function.
	 * According to the returning value of the function, print its parity.
	 *
	 */
	if (isEven(n))
		printf("The number is Even\n");
	else
		printf("The number is Odd\n");

	return 0;
}
