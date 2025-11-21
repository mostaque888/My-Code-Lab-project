#include <iostream>
#include <string>

int main() {
    // Declare and initialize the array of names
    std::string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    int arraySize = sizeof(names) / sizeof(names[0]);

    // Option 1: Fixed search term
    // std::string searchName = "Sam";

    // Option 2: Allow the user to enter the search term
    std::string searchName;
    std::cout << "Enter the name to search for: ";
    std::getline(std::cin, searchName);

    bool found = false;

    // Loop through the array to search for the name
    for (int i = 0; i < arraySize; ++i) {
        if (names[i] == searchName) {
            found = true;
            break;
        }
    }

    // Output result
    if (found) {
        std::cout << searchName << " was found in the list!" << std::endl;
    } else {
        std::cout << searchName << " was NOT found in the list." << std::endl;
    }

    return 0;
}
