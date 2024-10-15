/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given an array like in Exercise 4, but guaranteed to be sorted, followed by a new
 *	element to be added to the array. Find out the position(index) where this element needs to
 *	be inserted and insert it there. Print the selected position followed by the new array in the
 *	new line.
 *
 *	Solution:
 *
 *	Input the number of elements, n, and the element to be inserted.
 *	Declare an array of size n + 1 which will also include the new element.
 *	Input the elements of the array
 *	Loop to find the position where the new element should be inserted.
 *	If the current array element is greater than or equal to the new element,
 *	set the position to the current index and exit the loop.
 *	If no position is found, set pos to n to insert at the end of the array.
 *	Print the position where the new element will be inserted.
 * 	Shift elements to the right to create space for the new element.
 *	Insert the new element at the determined position.
 * 	Use a for loop to print the updated array with the new element included.
 *	Print each element in the array.
 *
 */

#include <stdio.h>

int main() {
	int n, element, pos = -1;
	scanf("%d", &n);

	int arr[n + 1];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &element);
	for (int i = 0; i < n; i++) {
		if (arr[i] >= element) {
			pos = i;
			break;
		}
	}
	if (pos == -1) {
		pos = n;
	}
	printf("%d\n", pos);
	for (int i = n; i > pos; i--) {
		arr[i] = arr[i - 1];
	}
	arr[pos] = element;
	for (int i = 0; i <= n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
