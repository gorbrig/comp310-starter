#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int number = 5;
    
    printf("Factorial of %d is: %d\n", number, factorial(number));

    return 0;
}

// Function definition for factorial calculation
int factorial(int n) {
    if (n <= 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
