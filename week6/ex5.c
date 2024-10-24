/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Palindrome is a word, number, phrase, or other sequence of symbols that reads
 *	the same backwards as forwards. E.g., “ana”, “ata”, 1991, “racecar”, etc. Given a
 *	sentence/word/number, print YES if that is palindrome, NO otherwise.
 *
 *	Solution:
 *	Firstly, find the length of the given string.
 *	Use a `for` loop to reverse the given string and copy the reversed input string into the new string variable `rev`.
 *  Use '\0' to terminate the new string `rev`, because both strings must be terminated for `strcmp()` to work.
 *	Compare the two strings using the `strcmp()` function, and print "YES" or "NO" based on the result of the comparison.
 *
 */

#include <stdio.h>
#include <string.h>

int main() {
	char str[1002], rev[1002];
	int length = 0;
	int cnt = 0;
	fgets(str, sizeof(str), stdin);
	length = strlen(str);
	if (str[length - 1] == '\n') {
		str[length - 1] = '\0';
		length--;
	}
	for (int i = length - 1; i >= 0; i--) {
		rev[cnt++] = str[i];
	}
	rev[cnt] = '\0';
	if (strcmp(rev, str) == 0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
