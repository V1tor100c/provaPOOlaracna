#include "contorle_posição.hpp"

Controle_Posicao::Controle_Posicao(){
}

void Controle_Posicao::movePatas(){

p[0].move();
p[1].move();
p[2].move();
p[3].move();

}