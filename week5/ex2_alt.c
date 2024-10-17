/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given an array of integers. Write a program that takes an integer `n` and followed
 *	by `n` number of integers and print the elements that are less than their neighboring
 *	elements.
 *	
 *	Solution:
 *	
 *	An alternative solution would be to "wrap" the given integer array by adding additional
 *	two elements to the beginning and the end and setting them to a very large number. For example,
 *	we are using `int` in this solution, so we will utilize `INT_MAX` (the upper bound of the `int` data type)
 *	from `limits.h`. For `long long`, you can use `LLONG_MAX` from `limits.h`. We can then compare all elements as if each
 *	of them had two neighbors. The first and last elements in the original array will be checked if they are
 *	smaller than `INT_MAX` (note that they always are, except if the value of the element is
 *	`INT_MAX` itself, but this case does not make the solution incorrect, as this element cannot also be smaller
 *	than the neighboring element from the original array) and another number from the original array.
 *
 */

#include <stdio.h>
#include <limits.h>

int main() {
	int n;
	scanf("%d", &n);

	/* The length is `n + 2` to accommodate the added large elements. */
	int nums[n + 2];
	for (int i = 1; i < n + 1; i++)
		scanf("%d", &nums[i]);

	nums[0] = nums[n + 1] = INT_MAX;

	for (int i = 1; i < n + 1; i++)
		if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1])
			printf("%d ", nums[i]);
	
	printf("\n");
}
