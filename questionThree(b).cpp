#include <iostream>

// Function to calculate the greatest common divisor
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

/**
 * Reduces a fraction by dividing both numerator and denominator by their greatest common divisor.
 *
 * @param num The numerator of the fraction.
 * @param denom The denominator of the fraction.
 * @return 0 if either num or denom is zero or negative, 1 otherwise.
 */
int reduce(int num, int denom) {
    if (num <= 0 || denom <= 0) {
        return 0;
    }

    int common_divisor = gcd(num, denom);
    num /= common_divisor;
    denom /= common_divisor;
    return 1;
}

int main() {
    std::cout << reduce(12, 15) << std::endl;  // Output: 1 (reduced fraction: 4/5)
    std::cout << reduce(24, 30) << std::endl;  // Output: 1 (reduced fraction: 4/5)
    std::cout << reduce(0, 10) << std::endl;   // Output: 0 (invalid input)
    std::cout << reduce(-3, 5) << std::endl;   // Output: 0 (invalid input)
    return 0;
}