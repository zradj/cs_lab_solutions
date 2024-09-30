// Statement: Taylor series or Taylor expansion of a function is an infinite sum of the terms that 
// are expressed in terms of the function's derivatives at a single point. There are some 
// commonly used Taylor Series. 
// Given a floating-point value x and a positive integer n. Find the sin(x) by applying Taylor 
// series for sine and use n as the number of terms to be accumulated. 

// Solution: The Taylor series can be simplified in several steps.
// Firstly, we need to express (-1)^(i) in the code to indicate the sign change between the terms.
// In order to do this, we can declare a variable "sign" which will change the term's sign in each consecutive term by multiplying it with -1.
// The next step is to calculate the numerator and denominator separately.
// Both can be further simplified by omitting the repetitive parts, leaving the denominator as 
//denominator_prev *= (2 * i + 1) * (2 * i) and the numerator as numerator_prev *= x * x.
// Using these two simplified formulas, every term can be calculated up to the specified
// n, and their sum, which represents sin(x), can be computed as well.


#include <stdio.h>

int main() {
    double x, sinx = 0.0;
    int n, i = 0;
    scanf("%lf %d", &x, &n);
    double term = x, denominator = 1.0;
    int sign=-1;
    while (i < n) {
      // sinx += (i % 2 == 0) ? term : -term;
      sinx+=sign*term;
               i++;
        denominator *= (2 * i+1) * (2 * i);
        term = (term * x * x) / denominator;
              sign=(-1)*sign;
    }
    printf("%.3lf\n", sinx);
    return 0;
}
