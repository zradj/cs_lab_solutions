/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given an array of integers. Write a program that takes an integer `n` and followed
 *	by `n` number of integers. Print the elements in the following order:
 *	All the minimums first, all the maximums last, the rest of the elements in the very same
 *	order they appear in the original array.
 *
 *	Solution:
 *
 *	Input the number of elements, `n`
 *	Declare an array of size n to store the elements.
 *	Initialize the minimum and maximum values with the first element of the array
 *	Declare counter variables for each of min and max variables: minCount, maxCount
 *	Loop through the array starting from the second element to find the minimum and maximum values,
 *	Use if statements to find min and max values and count their occurences
 *	Use a loop to print minimum element minCount times
 *	Loop through the array to print all elements that are neither minimum nor maximum.
 *	Use a loop to print the maximum element maxCount times
 *
 */

#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	int arr[n];
	int maxCount = 0, minCount = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int min = arr[0], max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == min) {
			minCount++;
		}
		if (arr[i] == max) {
			maxCount++;
		}
	}

	for (i = 0; i < minCount; i++) {
		printf("%d ", min);
	}
	for (i = 0; i < n; i++) {
		if (arr[i] != min && arr[i] != max) {
			printf("%d ", arr[i]);
		}
	}

	for (i = 0; i < maxCount; i++) {
		printf("%d ", max);
	}

	printf("\n");

	return 0;
}
