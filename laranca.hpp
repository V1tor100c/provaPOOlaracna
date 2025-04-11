#ifndef LARACNA
#define LARACNA

#include "contorle_posição.hpp"
#include "localizacao.hpp"

class Laracna {

public:

    Laracna();
    Controle_Posicao controlePosicao;
    Localizacao localiza;
    void moveLaracna(int, int, int);
    void localizaLaracna(int, int, int);
    void movaAte(int, int, int);
    ~Laracna();

private:

    int = atualx, atualy, atualx;
    int = movex, movey, movez;

};

#endif