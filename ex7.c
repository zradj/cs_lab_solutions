// Statement: The hailstone sequence is formed as follows: If the number is even, 
// divide it by 2; if it is odd, multiply it by 3 and add 1. 
// Your task is to write a program that takes a positive integer 
// and produces the hailstone sequence starting from that integer,
// followed by the length of the sequence on a new line.

// Solution: The hailstone sequence continues until the number equals 1. 
// The next value of the number is calculated based on whether it is even or odd, repeating this process until it reaches 1. 
// The cnt variable counts the number of elements in the sequence.

#include <stdio.h>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    printf("%d\n", n);
    cnt++;
    while (n > 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1; 
        }
        printf("%d\n", n);
        cnt++;
    }
    printf("%d\n", cnt);
    
    return 0;
}
