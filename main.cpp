#include <iostream>

using namespace std;

#ifndef PATA_HPP
#define PATA_HPP
class Pata {

public:
    
    Pata();
    void move(int[3]);
    ~Pata();

private:

};
#endif

Pata::Pata(){}

void Pata::move(int p[3]){
    cout << "tck tck tkc tkc tck" << endl;
}

Pata::~Pata(){}

#ifndef LOCALIZACAO_HPP
#define LOCAIZACAO_HPP
class Localizacao{
public:

    Localizacao();
    void posicaoAtual(int[3]);
    ~Localizacao();

private: 

};
#endif

Localizacao::Localizacao(){}

void Localizacao::posicaoAtual(int p[3]){

    cout << "Eu estou aqui x=" << p[0] << " y=" << p[1] << " z=" << p[2] << endl;
}

Localizacao::~Localizacao(){}

#ifndef CONTORLE_POSICAO_HPP
#define CONTORLE_POSICAO_HPP
class Controle_Posicao {

public:

    Controle_Posicao();
    Pata pata[4];
    void movePatas(int[3]);
    ~Controle_Posicao();

private:

};
#endif

Controle_Posicao::Controle_Posicao(){}

void Controle_Posicao::movePatas(int posicao[3]){

    for(int i = 0; i < 4; i++){
        pata[i].move(posicao);
    }
}

Controle_Posicao::~Controle_Posicao(){}

#ifndef LARACNA_HPP  
#define LARACNA_HPP
class Laracna {

public:

    Laracna();
    Controle_Posicao controlePosicao;
    Localizacao localiza;
    void moveLaracna();
    void localizaLaracna();
    void movaAte(int, int, int);
    ~Laracna();

private:

    int atualPosition[3];
    int movePosition[3];

};
#endif

Laracna::Laracna(){}

void Laracna::moveLaracna(){

    controlePosicao.movePatas(movePosition);
}

void Laracna::localizaLaracna(){

    atualPosition[0] = movePosition[0];
    localiza.posicaoAtual(movePosition);

}

void Laracna::movaAte(int x, int y, int z){
   movePosition[0] = x;
   movePosition[1] = y;
   movePosition[2] = z;
   moveLaracna();
   localizaLaracna();
}

Laracna::~Laracna(){}

int main() {

    Laracna laracna;
    laracna.movaAte(5, 4, 7);
    laracna.movaAte(1, 2, 3);

    return 0;
}