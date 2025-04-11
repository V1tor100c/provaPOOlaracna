#include "laranca.hpp"

Laracna::Laracna(){
}

void Laracna::moveLaracna(){
     controlePosicao.movePatas();
}

void Laracna::localizaLaracna(){
    localiza.posiçãoAtual();
}

void Laracna::movaAte(int x, int y, int z){
   movex = x;
   movey = y;
   movex = z;
   moveLaracna();
   localizaLaracna();
}