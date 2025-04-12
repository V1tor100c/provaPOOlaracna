#include "localizacao.hpp"
#include <iostream>

using namespace std;

Localizacao::Localizacao(){
}

int Localizacao::posicaoAtual(int x, int y, int z){

    cout << "Eu estou aqui " << x << ", " << y << ", " << z << endl;

    return x, y, z;
}