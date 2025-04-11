#ifndef LOCALIZACAO_HPP
#define LOCAIZACAO_HPP

#include "laranca.hpp"

class localizacao{
public:

    localizacao();
    int read_localization(int x,int y, int z);
    ~localizacao();

private:

    int _x, _y, _z = 0;

};

#endif