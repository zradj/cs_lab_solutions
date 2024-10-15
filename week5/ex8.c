/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given an array of integers. Write a program that takes an integer `n` and followed
 *	by `n` number of integers. Find the sum of the elements excluding the minimum and the
 *	maximum elements.
 *	
 *	Solution [with arrays]:
 *	
 *	Declare an array of size `n`. Read and insert all given elements into it.
 *	Determine `min` and `max`. After that, run a `for` loop on the array to add
 *	all non-minimum and non-maximum elements in a separate variable.
 *
 */

#include <stdio.h>

int main() {
	int n, min, max, sum = 0;
	scanf("%d", &n);
	int nums[n];

	/*
		Please see the first comment in the solution to Exercise 6
		from Week 4 if you are confused about this.
	 */
	scanf("%d", &nums[0]);
	min = max = nums[0];

	for (int i = 1; i < n; i++) {
		scanf("%d", &nums[i]);
		if (nums[i] < min) min = nums[i];
		if (nums[i] > max) max = nums[i];
	}

	for (int i = 0; i < n; i++)
		if (nums[i] != max && nums[i] != min)
			sum += nums[i];
	
	printf("%d\n", sum);
}
