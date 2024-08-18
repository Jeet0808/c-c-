#include <stdio.h>
#include <math.h>

float numerator(float x, int j);
float denominator(int j);

int main() {
    float x;
    float sum = 0;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    for (int i = 1, j = 1; i <= 10; i++, j += 2) {
        float a = numerator(x, j);
        float b = denominator(j);
        if(b==0) {
            b = b+1;
        }
        float n = a / b;
        (i % 2 == 0) ? (sum -= n) : (sum += n);
    }

    printf("Sum = %f\n", sum);
    return 0;
}

float numerator(float x, int j) {
    // Using the pow function for efficient power calculation
    return pow(x, j);
}

float denominator(int j) {
    // Calculating factorial using an array to store values
    float fact[11]; // Factorial values for j = 0 to 10
    fact[0] = 1;

    for (int m = 1; m <= 10; m++) {
        fact[m] = fact[m - 1] * m;
    }

    return (j == 0) ? 1 : fact[j];
}
