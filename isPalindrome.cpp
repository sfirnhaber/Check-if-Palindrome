/*
 * Check if Palindrome
 * By Sam Firnhaber
 */
 
#include <iostream>

int main() {
    
    std::string input;
    bool isPalindrome = true;
    std::cin >> input;
    for (int i = 0; i < input.length() / 2; i++) {
        if (input[i] != input[input.length() - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        std::cout << input << " IS a palindrome." << std::endl;
    else
        std::cout << input << " is NOT a palindrome." << std::endl;

    return 0;
}
