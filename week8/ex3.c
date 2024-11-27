/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Define a function that, given two non-negative integers, a and b, calculates a ^ b.
 *  Use an iterative solution.
 *  Example: pow(5,0) -> 1. pow(1, 1000) -> 1. pow(5,3) -> 125
 * 
 *  Solution:
 *  
 *  Inside the Pow() function, first check the special cases;
 *  If b = 0, return 1 (since any number raised to the power of 0 is 1).
 *  If a = 0 and b > 0, return 0 (since 0 raised to any positive number is 0).
 *  Then use a for or while loop to iteratively calculate a^b and store the result in the 'res' variable.
 *  Return the 'res' variable as the result of the calculation.
 *  In the main function, pass a and b to the function and print the output returned by the function.
 *
 */

#include <stdio.h>

long long Pow(int a, int b) {
    if (b == 0) return 1;
    if (a == 0) return 0;

    long long res = 1;
    while (b--) {
        res *= a;
    }
    return res;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%lld", Pow(a, b));

    return 0;
}
