#ifndef PATA_HPP
#define PATA_HPP

#include "laranca.hpp"

class pata {

public:
    
    pata();
    int mover(int x,int y, int z);
    ~pata();

private:

    int _x, _y, _z = 0;

};

#endif
