#include <iostream>
#include <climits> // Required for INT_MAX and INT_MIN

int reverseInteger(int x) {
    int reversed = 0;

    while (x != 0) {
        int digit = x % 10; // Extract the last digit

        // Check for potential overflow/underflow BEFORE the multiplication
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) {
            return -1; // Overflow
        }
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8)) {
            return -1; // Underflow
        }

        // Build the reversed number
        reversed = reversed * 10 + digit;

        x /= 10; // Remove the last digit from the original number
    }

    return reversed;
}

int main() {
    int num1 = 123;
    int num2 = -123;
    int num3 = 120;
    int num4 = 2147483647; // INT_MAX
    int num5 = -2147483648; // INT_MIN

    std::cout << "Reverse of " << num1 << " is: " << reverseInteger(num1) << std::endl;
    std::cout << "Reverse of " << num2 << " is: " << reverseInteger(num2) << std::endl;
    std::cout << "Reverse of " << num3 << " is: " << reverseInteger(num3) << std::endl;
    std::cout << "Reverse of " << num4 << " is: " << reverseInteger(num4) << std::endl; // Should return 0 due to overflow
    std::cout << "Reverse of " << num5 << " is: " << reverseInteger(num5) << std::endl; // Should return 0 due to underflow

    return 0;
}
