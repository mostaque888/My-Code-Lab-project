#include <iostream>
int main() {
    // 1) Count up from 0 to 50 (increments of 1)
    std::cout << "1) Count up from 0 to 50:\n";
    for (int i = 0; i <= 50; ++i) {
        std::cout << i;
        if (i < 50) std::cout << ", ";
    }
    std::cout << "\n\n";
 // 2) Count down from 50 to 0 (decrements of 1)
    std::cout << "2) Count down from 50 to 0:\n";
    for (int i = 50; i >= 0; --i) {
        std::cout << i;
        if (i > 0) std::cout << ", ";
    }
    std::cout << "\n\n";

    // 3) Count up from 30 to 50 (increments of 1)
    std::cout << "3) Count up from 30 to 50:\n";
    for (int i = 30; i <= 50; ++i) {
        std::cout << i;
        if (i < 50) std::cout << ", ";
    }
    std::cout << "\n\n";

    // 4) Count down from 50 to 10 (decrements of 2)
    std::cout << "4) Count down from 50 to 10 (step -2):\n";
    for (int i = 50; i >= 10; i -= 2) {
        std::cout << i;
        if (i > 10) std::cout << ", ";
    }
    std::cout << "\n\n";

    // 5) Count up from 100 to 200 (increments of 5)
    std::cout << "5) Count up from 100 to 200 (step +5):\n";
    for (int i = 100; i <= 200; i += 5) {
        std::cout << i;
        if (i < 200) std::cout << ", ";
    }
    std::cout << "\n";

    return 0;
}
