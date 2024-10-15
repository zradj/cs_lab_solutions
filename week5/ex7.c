/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given an array of integers. Write a program that takes an integer n and followed 
 *	by n number of integers. Print the elements in the following order:
 *	All the minimums first, all the maximums last, the rest of the elements in the very same 
 *	order they appear in the original array.
 *
 *	Solution:
 *
 *	Input the number of elements, n
 *	Declare an array of size n to store the elements.
 *	Initialize the minimum and maximum values with the first element of the array.
 *	Loop through the array starting from the second element to find the minimum and maximum values,
 *	Use if statements to find min and max values 
 *	Loop through the array to print all occurrences of the minimum value.
 *	Loop through the array to print all elements that are neither minimum nor maximum.
 *	Loop through the array to print all occurrences of the maximum value.
 */


#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   int min = arr[0],max = arr[0];   
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (i = 0; i < n; i++) {
        if (arr[i] == min) {
            printf("%d ", arr[i]);
        }
    }
    for (i = 0; i < n; i++) {
        if (arr[i] != min && arr[i] != max) {
            printf("%d ", arr[i]);
        }
    }
    for (i = 0; i < n; i++)
     {
        if (arr[i] == max) {
            printf("%d ", arr[i]);
        }
     }

    return 0;
}
