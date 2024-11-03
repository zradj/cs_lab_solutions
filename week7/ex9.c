/*
 *
 *	Author: Elnama Mammadova
 *
 *	Problem:
 *
 *	Similar to guess game you developed before, you need to build a Treasure
 *	Hunter game. When the program starts, you ask user about the size of the board n. It is not
 *	allowed to start with n < 3. Then you create a n*n array that holds only ‘_’ characters as they
 *	are empty cells. Then randomly select one of the cells in the n*n matrix to hide the treasure
 *	there, by marking it with character ‘t’.
 *	Then let the user guess the coordinates where the treasure can be. The user has maximum
 *	of n*2 chances before finding the treasure. After every incorrect guess, you should show
 *	the number of attempts left, and the message to indicate where to check next: North,
 *	West, South, East, NorthWest, SouthWest, SouthEast, NorthEast.
 *	If the user cannot find the treasure before running out of attempts, s/he fails. Otherwise
 *	show the success message “You win in x attempts”
 *	Note: User can terminate and start again whenever s/he wants. So, implement an option
 *	for exit at any time.
 *
 *	Solution is provided as comments
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int n;
	printf("Game started!\n");
	srand(time(0)); // This ensures that each time the program is run, it generates a different sequence of random numbers.

	while (1) {
		// Enter a value of n or -1 to exit
		if (scanf("%d", &n) != 1 || n == -1) {
			printf("Game exited!\n");
			break;
		}
		// check if n is greater than 3
		if (n < 3) {
			printf("Please enter a value of n >= 3\n");
			continue;
		}

		int x = rand() % n; // generate a random integer between 0 and n-1
		int y = rand() % n;
		int inputx, inputy, chances = 2 * n;
		while (chances > 0) {
			// read the guess coordinates of the user
			scanf("%d %d", &inputx, &inputy);
			// Check for game restart condition
			if (inputx == -1 && inputy == -1) {
				printf("Restarting game\n");
				break;
			}

			// Check if the guess is correct
			if (inputx == x && inputy == y) {
				printf("You win in %d attempts!\n", 2 * n - chances + 1);
				return 0;
			}

			// give hints about where to check next
			printf("%d attempts left\n", --chances);
			if (inputx < x && inputy < y)
				printf("Try SouthEast\n");
			else if (inputx < x && inputy > y)
				printf("Try SouthWest\n");
			else if (inputx == x && inputy < y)
				printf("Try East\n");
			else if (inputx == x && inputy > y)
				printf("Try West\n");
			else if (inputx < x && inputy == y)
				printf("Try South\n");
			else if (inputx > x && inputy == y)
				printf("Try North\n");
			else if (inputx > x && inputy < y)
				printf("Try NorthEast\n");
			else if (inputx > x && inputy > y)
				printf("Try NorthWest\n");

			if (chances == 0) {
				printf("Game Over! The correct coordinates were (%d, %d)\n", x, y);
				break;
			}
		}
	}

	return 0;
}
