#include <stdio.h>

int main() {
    // Declare a char array for name, an int for age, a float for GPA
    char name[] = "Cooper Richardson";
    int age = 17;
    float gpa = 3.97;
    // Print each one using printf with the right format specifier
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa)
    // Hint: %s for strings, %d for int, %.1f for float with 1 decimal

    return 0;
}