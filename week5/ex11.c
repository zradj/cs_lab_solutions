/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given an array of integers. Write a program that takes an integer `n`
 *  and followed by `n` number of integers. It is guaranteed that all the numbers are repeated at 
 *  least twice except one. You need to find that single element that is not repeated.
 *  Note: All the elements of the array are in `[1-1000]` range.
 *
 *	Solution:
 *
 *	Read the number `n`.
 *	Declare an array of size `n` to store the integers.
 *	Declare a count array of size 1001 to track the occurrences of integers in the input, 
 *	as the numbers are in the range `[1-1000]`.
 *	Initialize the count array with zeros for all elements from index 1 to 1000.
 *	This array will hold the count of each element in the original array, by storing the count in `cnt[number]`.
 *	Therefore, if `number = arr[i]`, then `cnt[arr[i]]` will hold the count of `arr[i]`.
 *	Input the elements of the array; for each integer read, increment its corresponding 
 *	count in the count array.
 *	Loop through the original array to find the first integer that occurs exactly once.
 *	If such an integer is found, print it and break out of the loop.
 *
 */


#include<stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	int cnt[1001];

	for (int i = 1; i < 1001; i++) {
		cnt[i] = 0;
 	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		cnt[arr[i]]++;
	}

	for (int i = 0; i < n; i++) {
		if (cnt[arr[i]] == 1) {
			printf("%d\n", arr[i]);
			break;
		}
	}
}