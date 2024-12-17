/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given a string word and a character ch. Find the substring that starts from index 0
 *	and ends in the first occurrence of ch. Reverse the substring in place without introducing a new
 *	string. If the string does not have the character ch, do nothing.
 *
 *	Solution is provided as comments inside the code.
 *
 */

#include <stdio.h>
#include <string.h>

/* findPos() function returns the pointer to the first occurence of ch.
We use pointer str to iterate through the array till encountering the reference value of ch*/

char *findPos(char *str, char ch) {
	while (*str != '\0') {
		if (*str == ch) {
			return str;
		}
		str++;
	}
	return NULL;
}

/*
In this function we first get the position of ch using findPos() function,
if ch isn't in the array then do nothing.
Declare two pointers which will be used to swap the values stored in those pointers.
"start" pointer points to the first element in the array, and "end" pointer points to ch.
Using a while loop, swap first element and ch, and all elements in between them
*/
void reverseSubstring(char *str, char ch) {
	char *pos = findPos(str, ch);

	if (pos == NULL) {
		return;
	}
	char *start = str;
	char *end = pos;
	while (start < end) {
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int main() {
	char str[1001];
	char ch;
	scanf("%s", str);
	scanf(" %c", &ch);
	reverseSubstring(str, ch);
	printf("%s\n", str);

	return 0;
}
