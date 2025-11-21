#include <iostream>
#include <string>

int main() {
    const std::string correctPassword = "12345";
    const int maxAttempts = 5;
    int attemptsLeft = maxAttempts;
    std::string attempt;

    while (attemptsLeft > 0) {
        std::cout << "Enter password (attempts left " << attemptsLeft << "): ";
        std::getline(std::cin, attempt);

        if (attempt == correctPassword) {
            std::cout << "Welcome to the Secure Area\n";
            return 0;
        }

        attemptsLeft--;
        if (attemptsLeft > 0) {
            std::cout << "Incorrect password. You have " << attemptsLeft << " attempt";
            if (attemptsLeft != 1) std::cout << "s";
            std::cout << " remaining.\n";
        } else {
            std::cout << "Maximum attempts reached. Authorities have been alerted!\n";
        }
    }

    return 0;
}
