/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given an array of integers of size `n` and two integers `idx` and `el`.
 *	Insert the number `el` into the array at the position `idx`. If `idx`
 *	is out of the bounds of the array, print "Invalid input".
 *	
 *	Solution:
 *	
 *	Declare an array of size `n + 1` to accommodate all `n` numbers and,
 *	additionally, the new element that we have to insert. After reading all elements, 
 *	first check if `idx` is out of bounds -- this happens when it is less than 0 or larger than `n`.
 *	This is because an element can still be inserted at the position `n` since
 *	the array ends at the position `n - 1`. However, inserting an element at the
 *	position `n + 1` is not possible. After that, move all elements at and after
 *	`idx` one step forward using a `for` loop and insert `el` at `idx`.
 *
 */

#include <stdio.h>

int main() {
	int n, idx, el;
	scanf("%d", &n);

	int nums[n + 1];

	for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
	scanf("%d%d", &idx, &el);

	if (idx < 0 || idx > n) {
		printf("Invalid input\n");

		/*
			`return 0` immediately terminates the program. We can
			use it instead of writing an `else` block.
		 */
		return 0;
	}

	/* This section shifts the elements after and on `idx` to the right. */
	for (int i = n - 1; i >= idx; i--) nums[i + 1] = nums[i];

	nums[idx] = el;

	for (int i = 0; i < n + 1; i++) printf("%d ", nums[i]);
	printf("\n");
}
