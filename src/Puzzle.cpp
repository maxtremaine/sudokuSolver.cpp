#ifndef PUZZLE_CPP
#define PUZZLE_CPP

#include "../data/puzzle_data.cpp"
#include <iostream>
#include <string>

class Puzzle {
    public:
        std::string grid;

        Puzzle(std::string g) {
            grid = g;
        }

        static Puzzle fromFile() {
            std::string john = "hi";
            return Puzzle(john);
        }
        
        static void sayHi() {
            std::cout << "Oh hi there!" << std::endl;
        }
};

#endif