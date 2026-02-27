#include <stdio.h>

int main() {
    int num = 7;

    // Check if positive, negative, or zero and print the result
    if (num > 0) {
        printf("The number is positive\n");
    } else if (num < 0) {
        printf("The number is negative\n");
    } else {
        printf("The number is zero\n");
    }
    // Then check if even or odd and print the result
    if (num % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }

    return 0;
}