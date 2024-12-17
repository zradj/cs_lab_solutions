/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given an integer n and an array of n names. Names can be no longer than 50
 *	characters. In the last line, there is a target name. Search and print the index of the target
 *	name if it exists in the array, -1 otherwise.
 *
 *	Solution is provided as comments
 *
 */

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	char names[n][51];
	for (int i = 0; i < n; i++) {
		scanf("%s", names[i]);
	}

	char target[51];
	scanf("%s", target);

	int j;
	for (int i = 0; i < n; i++) {
		// Compare characters of the current name with the target
		for (j = 0; j < 51; j++) {
			// If characters do not match, break the inner loop
			if (names[i][j] != target[j]) {
				break;
			}
			// If end of the name is reached, break the inner loop
			if (names[i][j] == '\0') {
				break;
			}
		}

		/* If j iterates through all characters without breaking, both target and current name have reached the null terminator.
		This means the current name matches the target; print its index and exit the program. */
		if (target[j] == '\0' && names[i][j] == '\0') {
			printf("%d\n", i);
			return 0;
		}
	}

	// If the target name is not found, print -1
	printf("-1");

	return 0;
}
