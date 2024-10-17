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
	int n, start_ind = 0;
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

	/* Here we search for the index of the first non-zero element. */
	for (int i = 0; i < n; i++) {
		if (nums[i] != 0) {
			start_ind = i;
			break;
		}
	}

	/* If the such element is not found, it means that we have `[0]`. */
	if (start_ind >= n) {
		printf("[0]\n");
		return 0;
	}

	printf("[");

	for (int i = start_ind; i < n; i++)
		printf("%d, ", nums[i]);

	/* `\b\b` is to remove the last comma and space, which are redundant. */
	printf("\b\b]\n");
}