#ifndef LARACNA
#define LARACNA

#include <iostream>

using namespace std;

#include "contorle_posição.hpp"
#include "localizacao.hpp"

class Laracna {

public:

    Laracna();
    // Controle_Posicao controlePosicao;
    // Localizacao localiza;
    // void moveLaracna();
    // void localizaLaracna(int, int, int);
    // void movaAte(int, int, int);
    // ~Laracna();

private:

    int atualx, atualy, atualz;
    int movex, movey, movez;

};

#endif