/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given an array of integers. Write a program that takes an integer `n` and followed
 *	by n number of integers. Count and print each distinct element along with their counts in
 *	the ascending order of the elements.
 *
 *	Note: Even though the range of the given integers is not specified in the original problem,
 *	we assume it to be `[0-10000]` in this solution file for educational purposes.
 *	
 *	Solution:
 *	
 *	Read `n` and declare a counter array of size 10001 (to include all numbers in the range).
 *	For each given integer, use it as an index for the counter array and increment the value at this
 *	index. Essentially the value `cnt[k]` in the counter array will represent how many times the
 *	number `k` was encountered. After this, loop through `cnt` and print the indices for which the value
 *	is greater than zero, meaning they were encountered at least once. The outputs are always sorted
 *	since we use array indices to track the repetitions.
 *
 *	Note: Such a solution would not be correct for the original problem (without the specified range).
 *	This is because there is a possibility that a negative or a very large positive integer would be given.
 *	In the first case, negative indices are not used in C, so a counting array would make no sense.
 *	In the second case, a large integer would mean that we would have to create a counting array
 *	of (possibly) billions of elements, which would overwhelm the memory.
 *
 */

#include <stdio.h>

int main() {
	int n, x, cnt[10001];
	scanf("%d", &n);

	/*
		Without this, the values in the array will be indeterminate, i.e.
		they can be anything. This is because the values will depend on the
		state of the memory when C allocates memory for the `cnt` array,
		which is not possible to know in advance.
	 */
	for (int i = 0; i < 10001; i++) cnt[i] = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		cnt[x]++;
	}

	for (int i = 0; i < 10001; i++)
		if (cnt[i] > 0) printf("%d %d\n", i, cnt[i]);
}
