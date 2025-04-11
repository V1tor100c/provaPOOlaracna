#ifndef LARACNA
#define LARACNA

#include "contorle_posição.hpp"
#include "localizacao.hpp"

class Laracna {

public:

    Laracna();
    controle_posicao ControlePosicao;
    localizacao localiza;
    void moveLaracna();
    ~Laracna();

private:


};

#endif