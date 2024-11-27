/*
 *
 *	Author: Elnama Mammadova
 *
 *  Problem:
 *
 *  Define a function sumOfDigits(int n) that will take a number and return 
 *  the sum of its digits using RECURSION.
 *
 *  Solution:
 * 
 *  The function should return the sum of the digits in the number.
 *  In the iterative solution, we divide the number by 10 and add n % 10 to the sum variable in each iteration until the number becomes zero.
 *  Similarly, in the recursive solution, the base case is when n / 10 == 0.
 *  In each recursive call, we add n % 10 to the value returned by the function while dividing the argument by 10.
 *  When the base case is reached, the function returns the value of n (the last digit).
 *  Finally, the result of the function is printed.
 * 
 */


#include <stdio.h>
#include <math.h>

int sumOfDigits(int n) {
    if(n/10==0)
    return n;
    return sumOfDigits(n/10)+n%10;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",sumOfDigits(n));
}