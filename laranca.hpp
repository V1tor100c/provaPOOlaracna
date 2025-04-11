#ifndef LARACNA
#define LARACNA

#include "contorle_posição.hpp"
#include "localizacao.hpp"

class Laracna {

public:

    Laracna();
    Controle_Posicao controlePosicao;
    Localizacao localiza;
    void moveLaracna();
    void localizaLaracna();
    ~Laracna();

private:


};

#endif