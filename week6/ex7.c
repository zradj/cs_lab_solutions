/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given a string, create another string that is the reversed version of the original, 
 *	then print it.
 * 
 *	Solution:
 *
 *	Find the length of the given string using the `strlen()` function, and remove the newline character if present.
 *	Use a for loop to reverse the given string and copy the reversed input string into a new string.
 *	Print the new string.
 *
 */

#include <stdio.h>
#include <string.h>

int main() {
	char str[1002], newstr[1002];
	int cnt = 0;
	fgets(str, sizeof(str), stdin);
	int length = strlen(str);

	if (str[length - 1] == '\n') {
		str[length - 1] = '\0';
		length--;
	}

	for (int i = length - 1; i >= 0; i--) {
		newstr[cnt++] = str[i];
	}
	newstr[cnt] = '\0'; 
	printf("%s\n", newstr);

	return 0;
}
