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
 *	Solution:
 *	
 *	Declare an array of size `n`. Read and insert all given elements into it. Perform bubble sort
 *	on the array. This is needed to ensure that the output numbers are in ascending order.
 *	After the sorting, use a `for` loop to count the elements and print them (more details in the
 *	comments below).
 *
 *	Note: Since the range is not specified in the problem statement,
 *	counting sort is not a reasonable solution choice for this problem. However, you may want to
 *	see `ex6_alt.c`, which assumes a fixed range.
 *
 */

#include <stdio.h>

int main() {
	int n, x, cur, cnt, temp, nums_count;
	scanf("%d", &n);
	int nums[n];

	for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

	/*
		Bubble sort. It goes through the array and swaps adjacent
		elements if they are out of order until the array is sorted.
	 */
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (nums[j] > nums[j + 1]) {
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}

	/*
		Here we use `cnt` ("counter") to count each element and
		`cur` ("current") to save the last unique element.
		If the current element in the array is equal to `cur`, we increase
		`cnt`. If not, it means that we have processed all occurrences of this
		number, so we print `cur` and `cnt` and set `cur` to the newly encountered
		number and `cnt` to 1.
	 */
	cur = nums[0], cnt = 1;
	for (int i = 1; i < n; i++) {
		if (cur != nums[i]) {
			printf("%d %d\n", cur, cnt);
			cur = nums[i];
			cnt = 1;
		} else cnt++;
	}

	/*
		The last counted element is not printed in the loop above.
		For this reason, we print it separately.
	 */
	printf("%d %d\n", cur, cnt);
}
