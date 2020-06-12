#ifndef PUZZLE_H
#define PUZZLE_H

#include <iostream>
#include <map>
#include <string>
#include "Cell.h"

class Puzzle {
    public:
        std::map<std::string, Cell> grid;
        Puzzle(std::map<std::string, Cell> g);
        static Puzzle fromFile();
        static void sayHi();
};

#endif