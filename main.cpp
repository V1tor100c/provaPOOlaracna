#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef PATA_HPP
#define PATA_HPP
class Pata {

public:
    
    Pata();
    void move(const vector <int>& p);
    void esticar();
    void encolher();
    ~Pata();

private:

};
#endif

Pata::Pata(){}

void Pata::move(const vector <int>& p){
    cout << "Movendo para: x=" << p[0] << " y=" << p[1] << " z=" << p[2] << endl;
}

void Pata::esticar(){
    cout << "Esticando ..." << endl;
}

void Pata::encolher(){
    cout << "Encolhendo ..." << endl;
}

Pata::~Pata(){}

#ifndef LOCALIZACAO_HPP
#define LOCAIZACAO_HPP
class Localizacao{
public:

    Localizacao();
    void localize(const vector <int>&);
    ~Localizacao();

private: 

};
#endif

Localizacao::Localizacao(){}

void Localizacao::localize(const vector <int>& p){

    cout << "Robô Localizado" << endl;
}

Localizacao::~Localizacao(){}

#ifndef CONTORLE_POSICAO_HPP
#define CONTORLE_POSICAO_HPP
class Controle_Posicao {

public:

    Controle_Posicao();
    Pata pata[4];
    void movePatas(const vector <int>& posicao);
    void movePatas(string);
    ~Controle_Posicao();

private:

};
#endif

Controle_Posicao::Controle_Posicao(){}

void Controle_Posicao::movePatas(const vector <int>& posicao){

    for(int i = 0; i < 4; i++){
        pata[i].move(posicao);
    }
}

void Controle_Posicao::movePatas(string pose){
    if (pose == "esticar"){
        for(int i = 0; i < 4; i++){
            pata[i].esticar();
        }
        cout << "Laracna esta esticada" << endl;
    }
    else if(pose == "encolher"){
        for(int i = 0; i < 4; i++){
            pata[i].encolher();
        }
        cout << "Laracna esta encolhida" << endl;
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
    void mexer(const vector <int>&);
    void mexer(string);
    ~Laracna();

private:

    vector <int> atualPosition;
    vector <int> movePosition;

};
#endif

Laracna::Laracna(){
    atualPosition.resize(3);
    movePosition.resize(3);
}

void Laracna::moveLaracna(){

    controlePosicao.movePatas(movePosition);
}

void Laracna::localizaLaracna(){

    atualPosition[0] = movePosition[0];
    atualPosition[1] = movePosition[1];
    atualPosition[2] = movePosition[2];
    localiza.localize(atualPosition);
}

void Laracna::mexer(const vector <int>& p){

    for (int i = 0; i < 3; i++){
        movePosition[i] = p[i];
    }
    moveLaracna();
    localizaLaracna();
}

void Laracna::mexer(string pose){
    controlePosicao.movePatas(pose);
}

Laracna::~Laracna(){}

vector <int> destino;
// destino.resize(3);

int main() {

    Laracna laracna;
    destino = {1, 2, 3};
    laracna.mexer(destino);
    destino = {15, 25, 19};
    laracna.mexer(destino);
    laracna.mexer("encolher");
    laracna.mexer("esticar");

    return 0;
}