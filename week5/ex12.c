/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Write a program that takes an integer `n`, followed by `n` number of
 *	digits `[0-9]`, which represents a big number. Decrease this number
 *	by 1 and print the resulting number in the form of an array.
 *	
 *	Solution:
 *	
 *	Declare an array of size `n`. Read and insert all given elements into it.
 *	After that, run a `for` loop starting from the end of the array that
 *	simulates subtraction by 1. Inside it, if the current digit is not zero,
 *	subtract 1 and stop the loop. Otherwise, if the digit is zero, we set it to 9
 *	and continue the loop (this simulates borrowing in subtraction -- if we try
 *	to subtract 1 from 0, we set it to 9 and we have to subtract 1 from the next digit).
 *	Finally, we run the loop to print the resulting number in the form of an array
 *	(more details in the comments below).
 *
 */

#include <stdio.h>

int main() {
	int n, flag = 0;
	scanf("%d", &n);

	int nums[n];
	for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

	for (int i = n - 1; i >= 0; i--) {
		if (nums[i] != 0) {
			nums[i]--;
			break;
		}
		
		/*
			`else` is not needed since `break` above
			immediately terminates the loop.
		 */
		nums[i] = 9;
	}

	printf("[");
	for (int i = 0; i < n; i++) {
		/*
			`flag` helps us skip all leading zeros. If `flag` is 0, it
			means that we have not yet encountered a non-zero digit
			to begin the number. When we encounter such a number,
			we print it and set `flag` to 1. However, it is also possible
			that the only digit in the array is 0 (for instance, if the given
			number was 1). The condition `|| i == n - 1` below considers this case.
		 */
		if (flag == 0 && (nums[i] != 0 || i == n - 1)) {
			printf("%d", nums[i]);
			flag = 1;

		/* Note that for all subsequent elements, we print a comma and a space. */
		} else if (flag != 0) {
			printf(", %d", nums[i]);
		}
	}
	printf("]\n");
}