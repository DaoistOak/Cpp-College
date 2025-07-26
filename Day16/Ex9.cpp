#include <stdexcept>

void validateInput(int x) {
    if (x < 0) {
        throw std::invalid_argument("Input is negative");
    }
}

int main() {
    try {
        int userInput;
        std::cout << "Enter a value: ";
        std::cin >> userInput;
        validateInput(userInput);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

