#include <stdio.h>
#include <math.h>

double calculateFactorial(int n) {
    double factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

double calculateExponentialSeries(double x, int terms) {
    double result = 1.0;
    int sign = -1;
    double power = 1.0;
    for (int i = 1; i <= terms; i++) {
        power *= x;
        double term = power / calculateFactorial(i);
        result += sign * term;
        sign *= -1;
    }
    return result;
}

int main() {
    double x = 1.0;
    int terms = 5;

    double exponentialResult = calculateExponentialSeries(x, terms);
    printf("Exponential Series: %.6f\n", exponentialResult);

    return 0;
}

