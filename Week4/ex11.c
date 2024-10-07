/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *  A positive integer is given. Write a program to check whether the number is Armstrong number or not.
 *  A number is called Armstrong number when then number is equal to the sum of its own digits each raised
 *  to the power of the number of digits.
 *
 *
 *	Solution:
 *
 *	Use a for loop to count the number of digits.
 *  Use another for loop to calculate the sum of digits each raised to the power of digitCount
 *  Check if the calculated sum equals the input value
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int num, currentDigit, powerSum = 0, cnt = 0;
    scanf("%d", &num);
    for (int i = num; i > 0; i /= 10)
    {
        cnt++;
    }
    for (int i = num; i > 0; i /= 10)
    {
        currentDigit = i % 10;
        powerSum += pow(currentDigit, cnt);
    }
    if (powerSum == num)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
