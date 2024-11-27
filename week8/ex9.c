/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Define a function findSum(int arr[], int length) that will return the sum of the 
 *	elements of the array using RECURSION.
 *
 *	Solution:
 *
 *	The recursive function we are writing should find the sum of the elements in the array. 
 *	Pass the array and its size to the sumOfElements function.
 *	The base case is when n == 0, return 0. This means that when the array has no elements left to sum, return 0.
 *	In each recursive step, we will add the last element of the array to the value returned by the function 
 *	and decrease the length of the array by one.
 *	The recursive steps will repeat until we reach the base case.
 *
 */

#include <stdio.h>
#include <math.h>

int sumOfElements(int arr[], int n) {
    if(n==0)
    return 0;
    return sumOfElements(arr,n-1)+arr[n-1];
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d",sumOfElements(arr,n));
}