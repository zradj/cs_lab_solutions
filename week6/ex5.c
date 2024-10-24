/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Palindrome is a word, number, phrase, or other sequence of symbols that reads
 *	the same backwards as forwards. E.g., “ana”, “ata”, 1991, “racecar”, etc. Given a
 *	sentence/word/number, print YES if that is palindrome, NO otherwise.
 *
 *  Solution:
 *	Find the length of the given string.
 *	Declare a flag to track if the string is a palindrome.
 *	If the last character is '\n', decrement the length variable by 1 and update the termination position of the string.
 *	Compare the string from both the start and end, iterating up to length/2.
 *	If a mismatch is found, set the flag's value to 0.
 *	Print "YES" if the flag indicates the string is a palindrome, otherwise print "NO".
 */


#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[1002];
    int length = 0;
    int isPalindrome = 1;

    fgets(str, sizeof(str), stdin);
    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

