/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given a string. Define a function that determines the length of the string without 
 *	using standard library function (strlen).
 *
 *	Solution is provided as comments inside the code.
 *
 */

#include <stdio.h>
#include<string.h>
int stringLength(char str[]) {
	int length = 0;
	char *ptr = str; // assign pointer ptr to the first element of char array str
	while (*ptr != '\0') { // iterate through the array using pointer ptr and update length variable concurrently
		length++;
		ptr++;
	}
	if (length > 0 && *(ptr - 1) == '\n') { // consider the case when last character is a newline
		length--;
	}

	return length; //return the length of the string
}

int main() {
	char str[10001];
	fgets(str, sizeof(str), stdin);
	printf("%d\n", stringLength(str));

	return 0;
}
