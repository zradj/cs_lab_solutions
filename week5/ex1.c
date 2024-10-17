/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given an array of integers. Write a program that takes an integer `n` and followed
 *	by `n` number of integers and print the elements that are less than the average of the array.
 *
 *	Solution:
 *
 *	Input the number of elements `n` in the array. Declare an array of size `n`.
 *	Use a for loop to input the elements of the array. As you input each element,
 *	add it to the sum variable. Calculate the average using the formula `average = sum / n`.
 *	Use another for loop to iterate through the array. For each element, check if
 *	it is less than the average. If the condition holds, print that element.
 *
 */

#include <stdio.h>

int main() {
	int n;
	float sum = 0;
	scanf("%d", &n);
	int arr[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	float avg = sum / n;
	
	for (int i = 0; i < n; i++) {
		if (arr[i] < avg) {
			printf("%d ", arr[i]);
		}
	}

	printf("\n");
}