/*
 *
 *	Author: Zaur Rajabov
 *
 *	Problem:
 *	
 *	---
 *	
 *	Solution:
 *	
 *	---
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
