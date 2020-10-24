#include <string>

class Cell {
    public:
        std::string code;
        char col;
        int row;
        std::string box;
        int gridEncoding;
        int fileEncoding;
        
        Cell(std::string _code, char _col, int _row, std::string _box, int _gridEncoding, int _fileEncoding);
};