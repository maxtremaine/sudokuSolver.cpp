#ifndef PUZZLE_DATA_CPP
#define PUZZLE_DATA_CPP

#include <iostream>
#include <string>
#include <map>

class Cell {
    public:
        std::string code;
        char col;
        char row;
        std::string box;

        Cell(std::string _code, char _col, char _row, std::string _box) {
            code = _code;
            col = _col;
            row = _row;
            box = _box;
        }
};

namespace puzzle_data {
    
    std::map<std::string, Cell> cells = {
        {"a1", Cell("a1", 'a', '1', "b2")}
    };
};

#endif