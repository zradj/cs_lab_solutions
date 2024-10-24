/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given a positive integer `n` in `[1-10]`. Print the square of size `n`
 *	so that odd columns are represented by their numbers, and even columns are
 *	represented by the letters of the English alphabet associated with their numbers.
 *	
 *	Solution:
 *	
 *	First, we will generate a single row and then print it `n` times. This way,
 *	we will not have to recompute the same values in every row. We first declare a string
 *	of the size `2 * n + 1` (`n` numbers/letters + `n` spaces + null terminator).
 *	After that, for each column, we check if its number is odd or even, and assign the
 *	required character.
 *
 */

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	char str[2 * n + 1];

	for (int i = 0; i < n; i++)
		/*
			The ternary operation here is equivalent to:

			if ((i + 1) % 2 == 0)
				str[2 * i] = 'A' + i;
			else
				str[2 * i] = '1' + i;
		 */
		str[2 * i] = ((i + 1) % 2 == 0 ? 'A' + i : '1' + i), str[2 * i + 1] = ' ';

	str[2 * n] = '\0';

	for (int i = 0; i < n; i++) printf("%s\n", str);
}
