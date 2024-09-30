/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given a sequence represented by: `x_i = 3 ∗ i − 1`
 *	So, the elements of the sequence are `[2, 5, 8, 11, ….]`
 *	Write a program to find out the sum and the product of the first n elements of the sequence 
 *	given an integer in range `[1, ∞)`.
 *
 *	Solution:
 *
 *	Declare an integer `i` as a counter, and initialize it to 1.
 *	Iterate `i` from 1 to `n`. In each iteration, calculate the `i`-th element using the formula given.
 *	Update the sum and the product of all elements from the 1st to the `i`-th element.
 *	Finally, print the sum and product of the elements.
 *
 */

#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    long long product = 1;
    scanf("%d", &n);

    while (i <= n) { 
        int xi = 3 * i - 1;
        sum += xi;
        product *= xi;
        i++;
    }
    
    printf("%d\n", sum);
    printf("%lld\n", product);

    return 0;
}
