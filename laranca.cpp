#include "laranca.hpp"

Laracna::Laracna(){
}

void Laracna::moveLaracna(){
     controlePosicao.movePatas();
}

void Laracna::localizaLaracna(){
    localiza.posiçãoAtual();
}

void Laracna::movaAte(){
   moveLaracna();
   localizaLaracna();
}