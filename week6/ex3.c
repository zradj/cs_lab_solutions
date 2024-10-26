/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given a text that is similar to the input of Exercise 2. Create another string which
 *	consists of the same tokens separated by _ (underscore)
 *
 *	Solution:
 *	Use a while loop to check if `str[i]` equals '#'. If so, assign '_' to `newstr[i]`;
 *  otherwise, copy the value of `str[i]` to `newstr[i]`. Increment the counter `i` in each iteration.
 *	Assign `newstr[i] = '\0'` to terminate the string. Print the resultant string.
 *
 */

#include <stdio.h>

int main() {
	char str[1002], newstr[1002];
	int i = 0;
	fgets(str, sizeof(str), stdin);
	while (str[i] != '\0') {
		if (str[i] == '#') {
			newstr[i] = '_';
		} else {
			newstr[i] = str[i];
		}
		i++;
	}
	newstr[i] = '\0';
	printf("%s\n", newstr);

	return 0;
}
