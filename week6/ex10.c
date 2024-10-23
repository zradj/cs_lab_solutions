/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given three strings: input string, `search`, and `target`. Replace all occurrences
 *	of `search` in the input string with the `target` and print the result.
 *	
 *	Solution:
 *	
 *	Run a loop through the input string. Also declare a string position variable (`str_pos`),
 *	which will be used to track the end position of the last found `search` value in the input string.
 *	Intially, it should be initialized to 0. In the loop, check if the substring starting at the
 *	current `i` is equal to the `search` value using `strncmp`. If it is not, go to the next character.
 *	Otherwise, first concatenate everything between `str_pos` and `i` (this is the portion
 *	where there was no `search` value) to the resulting string. After that, concatenate the `target`
 *	to the resulting string. Increase `i` by the length of the `search` value (i.e. we jump over it
 *	in the input string) and set `str_pos` to the new `i` (since the new `search` value has been found
 *	in the input string). After the loop, concatenate the remaining portion of the input string that
 *	was left out by the loop.
 *
 */

#include <stdio.h>
#include <string.h>

int main() {
	char str[1002], search[1002], target[1002], res[1000002];
	int str_pos = 0;
	res[0] = '\0';
	
	fgets(str, 1001, stdin);
	fgets(search, 1001, stdin);
	fgets(target, 1001, stdin);

	int search_len = strlen(search), res_len = 0;

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	if (search[search_len - 1] == '\n')
		search[search_len - 1] = '\0', search_len--;

	if (target[strlen(target) - 1] == '\n')
		target[strlen(target) - 1] = '\0';

	int i = 0;
	while (str[i] != '\0') {
		if (strncmp(str + i, search, search_len) == 0) {
			strncat(res, str + str_pos, i - str_pos);
			strcat(res, target);
			i += search_len;
			str_pos = i;
		} else i++;
	}

	strncat(res, str + str_pos, i - str_pos);

	printf("%s\n", res);
}
