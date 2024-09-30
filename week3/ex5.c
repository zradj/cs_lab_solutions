/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *	
 *	Given an integer. Find the sum of all its even digits.
 *	
 *	Solution:
 *	
 *	The problem can be solved using a while loop. Use the loop to repeatedly check the last digit of the number. 
 *  If the digit is even, add it to the sum.
 *  After each check, remove the last digit of the number until all digits are processed (when `n` becomes zero).
 *
 */

#include <stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d",&n);

    if (n < 0) {
        n = -n;
    }

    while (n>0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        n = n / 10;
    }

    printf("%d\n", sum);
}