/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given a sequence of integers. Find the sum of even and sum of odd elements
 *     with using a single repetition and print them separately.
 *
 *
 *	Solution:
 *
 *	Use a single for loop to input the numbers and add them to the appropriate sum variable (either even or odd).
 */
#include <stdio.h>

int main()
{
    int num;
    int sum_even = 0, sum_odd = 0;
    for (; scanf("%d", &num) != EOF;)
    {
        if (num % 2 == 0)
        {
            sum_even += num;
        }
        else
        {
            sum_odd += num;
        }
    }

    printf("%d\n", sum_even);
    printf("%d\n", sum_odd);

    return 0;
}
