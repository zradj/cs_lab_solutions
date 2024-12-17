/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given a string. Check if it is a palindrome using pointers.
 *	
 *	Solution:
 *	
 *	Use the method from Exercise 2 to check whether the string is a palindrome.
 *
 */

#include <stdio.h>
#include <string.h>
#define MAX_LEN 1001

int is_palindrome(char *str) {
	int i = 0, j = strlen(str) - 1;

	while (i < j) {
		if (*(str + i) != *(str + j))
			return 0;

		i++, j--;
	}

	return 1;
}

int main() {
	char str[MAX_LEN];
	scanf("%s", str);

	printf(is_palindrome(str) ? "YES\n" : "NO\n");
}
