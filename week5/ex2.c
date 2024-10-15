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
 *	Declare an array of size `n`. Read and insert all given elements into it.
 *	Run a `for` loop over the array and check whether each element is less than its neighboring
 *	elements. If the element is the first in the array, check it against the second
 *	element only. If it is the last element, check it against the one before it only.
 *	Otherwise, check the element against both of its neighbors.
 *
 */

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int nums[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &nums[i]);

	for (int i = 0; i < n; i++)
		if ((i == 0 && nums[i] < nums[i + 1]) ||
			(i == n - 1 && nums[i] < nums[i - 1]) ||
			(nums[i] < nums[i - 1] && nums[i] < nums[i + 1]))
				printf("%d ", nums[i]);
	
	printf("\n");
}
