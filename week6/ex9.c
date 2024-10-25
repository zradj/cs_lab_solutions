/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Given a text and search value(target) in separate lines. Check if the target is in 
 *	the text or not. If yes, print the starting index of the first occurence, if no, print an 
 *	appropriate message.
 * 
 *	Solution is provided as comments inside the code.
 *
 */
#include<stdio.h>
#include<string.h>

int main() {
	char text[1002];
	char target[1002];
	fgets(text, sizeof(text), stdin);
	fgets(target, sizeof(target), stdin);
	int text_len = strlen(text);
	int target_len = strlen(target);
	
	// Remove the newline character from the end of the text if present
	if (text[text_len - 1] == '\n') {
		text[text_len - 1] = '\0';
		text_len--;
	} 

	if (target[target_len - 1] == '\n') {
		target[target_len - 1] = '\0';
		target_len--;
	}

	int j = 0; // Variable j tracks the index in the target string
	for (int i = 0; i < text_len; i++) {
		// Check if the current character in the text matches the target's current character
		if (text[i] == target[j]) {
			j++;  // If they match, increment j to check the next character of the target
			// If the entire target string matches, print the starting index of the match in the text
			if (j == target_len) {
				printf("%d\n", i - target_len + 1);
				return 0;
			}
		} 
	   	// If there's a mismatch, reset j and shift back to text[i-j+1] to check if i-j+1 could be the starting index for the target.
		// This ensures that partial matches are correctly handled, as in cases like text="aab" and target="ab".


		else {
			i -= j;
			j = 0;
		}
	}
	
	// If no match is found, print this message
	printf("Search value is not found in the text.\n");
	return 0;
}
