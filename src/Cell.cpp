#include "Cell.h"

Cell::Cell(std::string _code, char _col, int _row, std::string _box, int _gridEncoding, int _fileEncoding) {
    code = _code;
    col = _col;
    row = _row;
    box = _box;
    gridEncoding = _gridEncoding;
    fileEncoding = _fileEncoding;
}