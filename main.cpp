#include <iostream>
#include "src/Cell.cpp"

int main() {
    Cell steve("a5", '8');

    std::cout << "Does this work: " << steve.code[0] << std::endl;
    std::cout << steve.code << std::endl;

    return 0;
}