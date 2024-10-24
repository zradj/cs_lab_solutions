/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given a string consisting of tokens separated by single spaces. Create another
 *	string with the reversed order of tokens and print it.
 *	
 *	Solution:
 *	
 *	Run a loop from the end of the input string to its start. Also, declare
 *	a variable that tracks the end position of the current token (`tok_end`).
 *	For each character, check if the one before it is a space. If it is, it
 *	means that we have finished reading a token. In this case, we concatenate
 *	this token to the resulting string using `strncat`, `tok_end`, and the loop
 *	counter `i`, which tracks the index of the current character in the loop.
 *	After that, concatenate a space to the resulting variable. Repeat this process
 *	until `i` becomes zero. After the loop, concatenate the remaining token
 *	that was not processed by the loop.
 *
 */

#include <stdio.h>
#include <string.h>

int main() {
	char str[1002], res[1002];
	int i, n, tok_end, len = 0;
	fgets(str, 1001, stdin);
	res[0] = '\0';

	n = strlen(str);
	if (str[n - 1] == '\n') str[n - 1] = '\0', n--;

	for (i = n - 1, tok_end = n; i > 0; i--) {
		if (str[i - 1] == ' ') {
			/* `str + i` refers to the `i`th character of `str` (starting position of the token). */
			strncat(res, str + i, tok_end - i);
			len += tok_end - i;

			/* Appending a space after the token in the resulting string. */
			res[len] = ' ', res[len + 1] = '\0';
			tok_end = i - 1;
			len++;
		}
	}

	/*
		The last token was not concatenated by the loop (because when `i` became
		zero, it did not encounter any space so the loop was terminated). Thus
		we perform concatenation once more to account for this remaining token.
	 */
	strncat(res, str, tok_end);

	printf("%s\n", res);
}
