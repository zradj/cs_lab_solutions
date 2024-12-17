/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given two strings. Concatenate these two strings without using
 *	standard library function (`strlen`).
 *	
 *	Solution:
 *	
 *	Write a function that copies every character of the second string to
 *	the end of the first string.
 *
 */

#include <stdio.h>
#include <string.h>
#define MAX_LEN 1002

void concatenate(char *dest, char *src) {
	int dest_len = strlen(dest), src_len = strlen(src);

	int i = 0;
	while (i < src_len) {
		*(dest + dest_len + i) = *(src + i);

		i++;
	}

	*(dest + dest_len + i) = '\0';
}

int main() {
	char str1[MAX_LEN * 2], str2[MAX_LEN];

	fgets(str1, 1001, stdin);
	fgets(str2, 1001, stdin);

	int len1 = strlen(str1), len2 = strlen(str2);

	if (str1[len1 - 1] == '\n') str1[len1 - 1] = '\0';
	if (str2[len2 - 1] == '\n') str2[len2 - 1] = '\0';

	concatenate(str1, str2);

	printf("%s\n", str1);
}
