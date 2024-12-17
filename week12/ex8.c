/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given two sorted arrays. Merge these into a single sorted array.
 *	
 *	Solution:
 *	
 *	In this problem, we will use the Two Pointer Technique. Write a function
 *	that has three position variables: first (`i`) for the first array, second (`j`) for the
 *	second array, and third (`k`) for the resulting array. After that, run a loop
 *	that compares the corresponding elements from both input arrays and writes the smaller element
 *	to the resulting array. After that, increment the chosen input array's position variable and
 *	the position variable of the resulting array. If any of the two input arrays is exhausted, copy
 *	all the values from the remaining array.
 *
 */

#include <stdio.h>

void merge_sorted(int *dest, int *nums1, int *nums2, int len1, int len2) {
	int i = 0, j = 0, k = 0;

	while (i < len1 || j < len2) {
		/*
			If any of the input arrays is exhausted, pick the value from the other one.
			Otherwise, pick the smaller element.
		 */
		if (i < len1 && (j >= len2 || *(nums1 + i) < *(nums2 + j))) {
			*(dest + k) = *(nums1 + i);
			i++;
		} else {
			*(dest + k) = *(nums2 + j);
			j++;
		}

		k++;
	}
}

int main() {
	int len1, len2;

	scanf("%d", &len1);
	int nums1[len1];
	for (int i = 0; i < len1; i++)
		scanf("%d", &nums1[i]);

	scanf("%d", &len2);
	int nums2[len2];
	for (int i = 0; i < len2; i++)
		scanf("%d", &nums2[i]);

	int dest[len1 + len2];
	merge_sorted(dest, nums1, nums2, len1, len2);

	for (int i = 0; i < len1 + len2; i++)
		printf("%d ", dest[i]);

	printf("\n");
}
