/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	---
 *	
 *	Solution:
 *	
 *	---
 *
 */

#include <stdio.h>

void merge_sorted(int *dest, int *nums1, int *nums2, int len1, int len2) {
	int i = 0, j = 0, k = 0;

	while (i < len1 || j < len2) {
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
