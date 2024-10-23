/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given a string consisting of one or more tokens separated by one or more spaces.
 *	Normalize the string, so that the tokens are separated by single spaces.
 *	
 *	Solution:
 *	
 *	Create to counters, one for the input string and another for the resulting
 *	string. Loop through the input string char-by-char and skip all spaces if it is not
 *	the first between the tokens. If a non-space or the first space character is encountered,
 *	copy it to the resulting string using its counter and increment the counter afterwards.
 *
 */

#include <stdio.h>

int main() {
	char str1[1002], str2[1002];
	fgets(str1, 1001, stdin);

	int i, j;
	for (i = 0, j = 0; str1[i] != '\0'; i++)
		if (str1[i] != ' ' || (i > 0 && str1[i - 1] != ' '))
			/* 
				`j++` increments `j` *after* the operation. Thus, first the original value
				of `j` will be used as an index, and only after that it will be incremented.

				This is equivalent to:

				str2[j] = str1[i];
				j++;
			 */
			str2[j++] = str1[i];
	
	str2[j] = '\0';
	printf("%s", str2);
}
