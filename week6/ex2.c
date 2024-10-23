/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given a string which consists of tokens separated by hashes (#). Print
 *	the number of tokens in the string.
 *	
 *	Solution:
 *	
 *	Initiliaze the result variable to 1 (because there is always at least one token
 *	in the string, with the result being 1 when there are no hashes). Then loop through
 *	the string char-by-char and increment the result variable whenever you encounter a hash.
 *
 */

#include <stdio.h>

int main() {
	/*
		The size of the string is 1002 because one character is reserved for the
		null terminator (`\0`) and another character is reserved for the newline character
		(`\n`) that `fgets` produces. Thus, by setting the size to 1002, 1000 characters will
		be reserved for the actual input.
	 */
	char str[1002];
	int res = 1;
	fgets(str, 1001, stdin);

	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == '#') res++;
	
	printf("%d\n", res);
}
