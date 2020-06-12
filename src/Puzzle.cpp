#include <iostream>
#include <map>
#include <string>
#include "Cell.h"

class Puzzle {
    public:
        std::map<std::string, Cell> grid;

        Puzzle(std::map<std::string, Cell> g) {
            grid = g;
        }

        static Puzzle fromFile() {
            std::map<std::string, Cell> john;
            return Puzzle(john);
        }
        
        static void sayHi() {
            std::cout << "Oh hi there!" << std::endl;
        }
};