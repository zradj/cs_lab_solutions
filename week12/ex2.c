/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given an array of doubles. Reverse the array in place using pointers and print the
 *	resulting array.
 *	
 *	Solution:
 *	
 *	Write a function that has two position variables: the first starts at the beginning of
 *	the array, while the second starts at the end. Run a loop that swaps the elements using
 *	the values of these variables, each time increasing the first one and decreasing the second one.
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
