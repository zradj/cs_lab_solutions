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

void reverse_array(double *arr, int length) {
	int i = 0, j = length - 1;
	double temp;
	
	while (i < j) {
		temp = *(arr + i);
		*(arr + i) = *(arr + j);
		*(arr + j) = temp;

		i++, j--;
	}
}

int main() {
	int length;
	scanf("%d", &length);
	double nums[length];

	for (int i = 0; i < length; i++)
		scanf("%lf", &nums[i]);

	reverse_array(nums, length);

	for (int i = 0; i < length; i++)
		printf("%lf ", nums[i]);

	printf("\n");
}
