#include <map>
#include <string>
#include "Cell.cpp"

class Puzzle {
    public:
        std::map<std::string, Cell> grid;

    Puzzle(std::map<std::string, Cell> g) {
        grid = g;
    }
};