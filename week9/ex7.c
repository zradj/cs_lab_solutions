/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 * Given a sorted array. Remove the duplicates from it. Define a function that accepts 
 *	the array as input and the number of elements in it. Update the array so that the duplicates are 
 *	removed. Return the number of elements in the resulting array.
 *	Note: It is guaranteed that the input will always be in the sorted order.
 *
 *	Solution is provided as comments inside the code.
 *
 */

#include <stdio.h>

int removeDuplicates(int *arr, int n)
{
	 /* assign the reference point of the first element of array to ptr.
	In the for loop, if the current element is different from the last unique element pointed to by ptr,
	move ptr to the next position and store the new unique element there. This creates
	a new array with only unique elements. */

	int *ptr = arr;
	for (int *current = arr + 1; current < arr + n; current++) { 
		if (*current != *ptr) {
			ptr++;
			*ptr = *current;
		}
	}

	return (ptr - arr + 1); //return the number of unique elements in the array
}

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int length = removeDuplicates(arr, n);
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n%d\n",length);

	return 0;
}
