#include <string>

class Cell {
    public:
        std::string code;
        char value;
        char col;
        int row;
        std::string box;
        int freedom;
    
    Cell(std::string c, char v) {
        code = c;
        value = v;
    }
};