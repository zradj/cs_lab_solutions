/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Write a program that takes an integer `n` and followed by `n` number of integers.
 *	Find the sum of the elements excluding the minimum and the maximum elements.
 *	
 *	Solution [without arrays]:
 *	
 *	Read all elements one-by-one. Add each element to a separate `sum` variable.
 *	Determine `min` and `max`. For each occcurrence of the current value of
 *	`max` or `min`, increment the respective counter (`max_cnt` or `min_cnt`).
 *	Finally, subtract all maximum and minimum elements from the `sum`  variable
 *	by multiplying `max` and `min` by their counters.
 *
 */

#include <stdio.h>

int main() {
	int n, x, min, max, min_cnt, max_cnt, sum = 0;

	scanf("%d%d", &n, &x);

	/*
		Please see the first comment in the solution to Exercise 6
		from Week 4 if you are confused about this.
	 */
	max = min = x, min_cnt = max_cnt = 1;
	sum += x;

	for (int i = 1; i < n; i++) {
		scanf("%d", &x);
		sum += x;

		if (x == max) max_cnt++;
		if (x == min) min_cnt++;
		if (x > max) max = x, max_cnt = 1;
		if (x < min) min = x, min_cnt = 1;
	}

	sum -= (max * max_cnt + min * min_cnt);
	printf("%d\n", sum);
}
