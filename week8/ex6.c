/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Define a function that will return the max of the given array. Return 0 if the
 *	array is empty.
 *	
 *	Solution:
 *	
 *	First, add a condition that will return 0 if the length is 0 (i.e. the array is empty).
 *	After that, initialize the result variable (`max` in this solution) with the first element
 *	of the array. Then run a loop that compares each remaining element of the array to the current
 *	maximum and reassigns it if the element is bigger than the current maximum.
 *
 */

int find_max(int arr[], int length) {
	if (length == 0) return 0;

	int max = arr[0];
	for (int i = 1; i < length; i++)
		if (arr[i] > max) max = arr[i];
	
	return max;
}
