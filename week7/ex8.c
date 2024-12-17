/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	Given an array of `n` names as in Problem 7, followed by a target key to search.
 *	The target might be a substring of some names. Print such names along with their indices.
 *	
 *	Solution:
 *	
 *	For each position in each name, we use `strncmp` to check if the current substring is
 *	equal to the target key. If it is, we immediately print the whole word with its index and
 *	jump to the next word. We also declare the flag `f` to check if there were any matched words.
 *	It is initially set to 0 (no matches) and is changed to 1 if at least one match is found.
 *	At the end, we print `-1` if `f` is still equal to 0 after all checks.
 *
 */

#include <stdio.h>
#include <string.h>

int main() {
	int n, i, j, f = 0;
	scanf("%d", &n);

	char names[n][51], target[51];
	for (i = 0; i < n; i++)
		scanf("%s", names[i]);

	scanf("%s", target);

	int target_len = strlen(target);

	for (i = 0; i < n; i++) {
		/*
			`j <= strlen(names[i]) - target_len` is just an optimization. Essentially, we do not
			bother checking the word anymore if the remaining portion is smaller
			than the target.
		 */
		for (j = 0; j <= strlen(names[i]) - target_len; j++) {
			if (strncmp(names[i] + j, target, target_len) == 0) {
				f = 1;
				printf("%s %d\n", names[i], i);
				break;
			}
		}
	}

	if (f == 0) printf("-1\n");
}
