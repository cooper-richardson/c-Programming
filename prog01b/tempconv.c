#include <stdio.h>

// Write your fahrenheitToCelsius function here
float tempConverter(float temp) {
    float C = ((temp - 32) * 5.0) / 9.0;
    printf("%.2f F == %.2f C", temp, C);
}
// Remember: return type is float, parameter type is float

int main() {
    // Call your function with 32, 212, 72, and 98.6
    tempConverter(32.0);
    tempConverter(212.0);
    tempConverter(72.0);
    tempConverter(98.6);
    // Print each result using printf with %.2f
    // Format: "XX.XX F = XX.XX C"

    return 0;
}