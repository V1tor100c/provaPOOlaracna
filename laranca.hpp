#ifndef LARACNA
#define LARACNA

#include "contorle_posição.hpp"
#include "localizacao.hpp"

class Laracna {

public:

    Laracna();
    controle_posicao ControlePosicao;
    localizacao localiza;
    void mover(int _x,int _y, int _z);
    int posicao_atual = 0;
    // ~Laracna();

private:


};

#endif