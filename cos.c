#include <stdio.h>
#include <math.h>

double calculateFactorial(int n) {
    double factorial = 1;
    for ( i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

double calculateCosineSeries(double x, int terms) {
    double result = 1.0;
    int sign = -1;
    double power = 1.0;
    for (i = 1; i <= terms; i++) {
        power *= x * x;
        double term = power / calculateFactorial(2 * i);
        result += sign * term;
        sign *= -1;
    }
    return result;
}

int main() {
    double x = 1.0;
    int terms = 10;

    double cosineResult = calculateCosineSeries(x, terms);
    printf("Cosine Series: %.6f\n", cosineResult);

    return 0;
}

