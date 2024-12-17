/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given an array of short integers. Shift the array elements to the left by 1 and print
 *	the resulting array.
 *
 *	Solution is provided as comments inside the code.
 *
 */

#include <stdio.h>

void shiftLeft(short *arr, int size) {
	short firstElement = arr[0]; // Store the first element before shifting
	short *ptr = arr;
	for (int i = 0; i < size - 1; i++) {
		*(arr + i) = *++ptr; // Shift each element to the left using ptr
	}
	arr[size - 1] = firstElement; // Move the firstElement to the last position
}

void printArray(short *arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%hd ", *(arr + i)); // Dereference pointer to each element and print the elements of the array
	}
	printf("\n");
}

int main() {
	int n;
	scanf("%d", &n);
	short arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%hd", &arr[i]);
	}
	printArray(arr, n);
	shiftLeft(arr, n);
	printArray(arr, n);

	return 0;
}
