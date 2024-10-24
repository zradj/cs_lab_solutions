/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given a text. Write a program that takes the input, stores it in a string and
 *	Calculates its length without using the `strlen()` of `math.h`.
 *
 *	Solution:
 *
 *	Use the `fgets()` function to read the entire line, including spaces.
 *	Use a `while` loop to determine the length of the string. If a space is encountered, it is not counted.
 *	Two variables are used: `i` for iterating through all characters and `length` for calculating the length of the string without counting spaces.
 *	Check if the last character is a newline (`\n`). If so, replace it with a null terminator (`\0`) and decrement the length to obtain actual length
 *	Print the calculated length.
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
	int length = 0;
	int i = 0;
	fgets(str, sizeof(str), stdin);
	while (str[i] != '\0') {
		if (str[i] != ' ') {
			length++;
		}
		i++;
	}

	if (str[i - 1] == '\n') {
		length--;
	}

	printf("%d\n", length);

	return 0;
}
