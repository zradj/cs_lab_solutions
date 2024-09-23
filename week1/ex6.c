/*
 *	Solution:
 *
 *	Since all members start simultaneously, the time to complete
 *	all of the tasks is the time to complete the longest one.
 *	The solution thus finds the biggest number among t1, t2, t3, t4.
 *
 */

#include <stdio.h>

int main() {
	int t1, t2, t3, t4, max;
	scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

	max = (t2 > t1 ? t2 : t1);
	max = (t3 > max ? t3 : max);
	max = (t4 > max ? t4 : max);

	printf("%d\n", max);
}
