/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given a sequence of integers. Find the sum of even and sum of odd elements
 *                    with using a single repetition and print them separately.
 *
 *
 *	Solution:
 *
 *	Use a single for loop to input the numbers and add them to the appropriate sum variable (either even or odd).
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
