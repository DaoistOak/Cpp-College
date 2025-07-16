#include <stdexcept>

void validateInput(int x) {
    if (x < 0) {
        throw std::invalid_argument("Input is negative");
    }
}

int main() {
    try {
        int userInput;


