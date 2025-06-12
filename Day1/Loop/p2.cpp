int main() {
    int rows = 5;
    while (rows >= 1) {
        int cols = rows;
        while (cols >= 1) {
            std::cout << "* ";
            cols--;
        }
        std::cout << "\n";
        rows--;
    }
    return 0;
}
