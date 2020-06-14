#include <iostream>
#include "src/Puzzle.cpp"
#include "data/puzzle_data.cpp"

int main() {
    
    std::cout << puzzle_data::cells.find("a1") -> second.code << std::endl;
    
    return 0;
}