/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given an array of integers. Find the maximum of the elements using pointers.
 *
 *	Solution is provided as comments inside the code.
 *
 */

#include <stdio.h>

int getMaximum(int *arr, int size) {
	int *ptr = arr; // assign the reference value of array's first element to pointer ptr
	int max = *ptr; // initialize max with the value at pointer ptr

	for (int i = 1; i < size; i++) {
		ptr++;			// move the pointer ptr to the next element in array
		if (*ptr > max) { // check if the value at ptr is greater than max, if so, update max
			max = *ptr;
		}
	}

	return max; // return the maximum element of the array
}

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("%d\n", getMaximum(arr, n)); // print the maximum value of the array using getMaximum()

	return 0;
}
