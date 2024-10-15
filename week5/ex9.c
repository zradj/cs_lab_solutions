/*
 *	
 *	Author: Elnama Mammadova
 *
 *	Problem: 
 *
 *	Fibonacci sequence is a sequence where each element is obtained by the sum 
 *	of the previous two elements.
 *	`𝐹0 = 0, 𝐹1 = 1, 𝐹𝑛 = 𝐹𝑛−1 + 𝐹𝑛−2 𝑓𝑜𝑟 𝑛 > 1`
 *	Example: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ....
 *	You are required to write a program that takes pairs of positive integers x and y and print the 
 *	Fibonacci numbers that are in the range of `[x, y]`. It is guaranteed that `0 < x <= y <= 3000`. If 
 *	there is no in the given range, simply print DO NOT EXIST.
 *	The program can stop at input EOF signal.
 *
 *	Solution:
 * 
 *	Declare an array to store Fibonacci numbers up to 3000.
 *	Initialize the first two Fibonacci numbers, `F0 = 0` and `F1 = 1`.
 *	Use a loop to generate Fibonacci numbers until the last number exceeds 3000.
 *	In each iteration, calculate the next Fibonacci number by summing the two previous numbers.
 *	If the calculated Fibonacci number exceeds 3000, break the loop.
 *	Use a loop to read `x` and `y` until EOF is reached.
 *	Initialize a flag variable `found` to track if any Fibonacci numbers are within the range.
 *	Loop through the generated Fibonacci numbers.
 *	If a Fibonacci number is within the range `[x, y]`, print it and set `found` to 1.
 *	After checking all Fibonacci numbers, if none were found, print "DO NOT EXIST".
 *	Otherwise, print a newline for formatting.
 * 
 */


#include <stdio.h>

int main() {
	int fib[3001];
	fib[0] = 0;
	fib[1] = 1;
	int count = 2;
	while (1) {
		fib[count] = fib[count - 1] + fib[count - 2];
		if (fib[count] > 3000) {
			break;
		}
		count++;
	}

	int x, y;
	while (scanf("%d%d", &x, &y) != EOF) {
		int found = 0;
		for (int i = 0; i < count; i++) {
			if (fib[i] >= x && fib[i] <= y) {
				printf("%d ", fib[i]);
				found = 1;
			}
		}
		if (found==0) {
			printf("DO NOT EXIST\n");
		} else {
			printf("\n");
		}
	}

	return 0;
}
