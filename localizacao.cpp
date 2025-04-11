#include "localizacao.hpp"

int localizacao::read_localization(int x,int y, int z) {
    _x = x;
    _y = y;
    _z = z;
    
    return (_x, _y, _z);
}