/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given an array of size `n` and the target number. Print the indices
 *	of the elements in the array that add up to the target value. It is
 *	guaranteed that at least one pair of such elements exists.
 *	
 *	Solution:
 *	
 *	Declare an array of size `n`. Read and insert all given elements into it.
 *	Run a `for` loop on the array. Inside this loop, make another `for` loop
 *	that runs from the element next to the current one until the end of the array.
 *	If the sum of the element from the top loop and the element from the
 *	nested loop is equal to the target, print the indices and terminate the program.
 *
 */

#include <stdio.h>

int main() {
	int n, t;

	scanf("%d%d", &n, &t);
	int nums[n];

	for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (nums[i] + nums[j] == t) {
				printf("%d %d\n", i, j);

				/* Immediately terminates the program. */
				return 0;
			}
		}
	}
}
