/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given the number of students and their heights in a row.
 *	Find the shortest and the tallest students and output
 *	their respective heights and positions in the row.
 *	
 *	Solution:
 *	
 *	Use the variables `max` and `min` to track
 *	the maximum and minimum heights, respectively, and
 *	`max_p` and `min_p` to track the positions.
 *	In the `for` loop, compare each person's height to the
 *	`min` and `max` variables and update them, along with
 *	`min_p` and `max_p`, if necessary.
 *
 */

#include <stdio.h>

int main() {
	int n, x, max, min, max_p = 1, min_p = 1;

	/*
		We read the first `x` outside the loop to
		properly initialize `max` and `min`.
		Initializing them to an arbitrary value may lead to
		incorrect results. For example, if we take `min = 10`
		but all given numbers are greater than 10, we will get a wrong minimum,
		because there are no persons with height 10.
	 */
	scanf("%d%d", &n, &x);

	max = min = x;
	for (int i = 2; i <= n; i++) {
		scanf("%d", &x);

		/*
			Commas allow us to write multiple variable assignments
			in one statement.

			For instance, the first line after this comment is identical to

			if (x > max) {
				max = x;
				max_p = i;
			}
		 */
		if (x > max) max = x, max_p = i;
		if (x < min) min = x, min_p = i;
	}

	printf("Shortest: %d %d\n", min, min_p);
	printf("Tallest: %d %d\n", max, max_p);
}
