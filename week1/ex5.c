/*
 *	Solution:
 *
 *	Initialize min and max digit variables. Set the
 *	maximum digit variable to the minimal possible value (0) and
 *	the minimum digit variable to the maximal possible value (9).
 * 	Use mod 10 (% 10) to get the last digit of the number and integer
 *	division by 10 (/ 10) to remove the last digit from the number.
 *	Using these techniques, compare the variables with each of the
 *	number's digits to find the minimum and maximum ones.
 *
 */

#include <stdio.h>

int main() {
	int x, min = 9, max = 0, digit;
	scanf("%d", &x);

	digit = x % 10;
	/* If something is smaller than the current minimum, then that something is the new minimum. */
	min = (digit < min ? digit : min);
	/* If something is bigger than the current maximum, then that something is the new maximum. */
	max = (digit > max ? digit : max);
	x /= 10;

	digit = x % 10;
	min = (digit < min ? digit : min);
	max = (digit > max ? digit : max);
	x /= 10;

	digit = x % 10;
	min = (digit < min ? digit : min);
	max = (digit > max ? digit : max);
	
	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
}
