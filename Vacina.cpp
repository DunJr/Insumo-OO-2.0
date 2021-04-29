#include "Vacina.h"

using namespace std;

int Vacina::getTipoI(){
    return tipoI;
}

string Vacina::getNome(){
    return nome;
}

double Vacina::getPreco(){
    return preco;
}

int Vacina::getQuantidade(){
    return quantidade;
}

string Vacina::getVencimento(){
    return vencimento;
}

string Vacina::getFabricante(){
    return fabricante;
}

string Vacina::getLocal(){
    return local;
}

string Vacina::getTipoVacina(){
    return tipoVacina;
}

int Vacina::getNumeroDoses(){
    return numeroDoses;
}

int Vacina::getIntervalo(){
    return intervalo;
}


void Vacina::setTipoI(int tipoI){
    this->tipoI = tipoI;
}

void Vacina::setNome(string nome){
    this->nome = nome;
}

void Vacina::setPreco(double preco){
    this->preco = preco;
}

void Vacina::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

void Vacina::setVencimento(string vencimento){
    this->vencimento = vencimento;
}

void Vacina::setFabricante(string fabricante){
    this->fabricante = fabricante;
}

void Vacina::setLocal(string local){
    this->local = local;
}

void Vacina::setTipoVacina(string tipoVacina){
    this->tipoVacina = tipoVacina;
}

void Vacina::setNumeroDoses(int numeroDoses){
    this->numeroDoses = numeroDoses;
}

void Vacina::setIntervalo(int intervalo){
    this->intervalo = intervalo;
}


Vacina::Vacina(){
    tipoI = 1;
    nome = " ";
    preco = 0;
    quantidade = 0;
    vencimento = " ";
    fabricante = " ";
    local = "Estoque";
    tipoVacina = " ";
    numeroDoses = 0;
    intervalo = 0;
}

void Vacina::criaInsumo(Vacina &vac, vector<Insumo*> &ms){
    ms.push_back(&vac);
}

void Vacina::listaInsumosSimples(vector<Insumo*> &ms){
    if(ms.size() == 0){
        cout << "Sem Vacinas no estoque." << endl;
        return;
    }else{
        for(int i = 0; i < ms.size(); i++){
            if(ms[i]->getTipoI() == 1){
                cout << "Insumo " << i+1 << ":"                             << endl;
                cout << "Tipo do insumo: Vacina"                            << endl;
                cout << "Nome do insumo: "      << ms[i]->getNome()         << endl;
                cout << "Quantidade do insumo: "<< ms[i]->getQuantidade()   << endl;
                cout << "Codigo de barra: "     << i                        << endl;
                cout << "\n"                                                << endl;
            }
        }
    }
}











/*
void Vacina::setDosagem(double dosagem){}
void Vacina::setAdministracao(string administracao){}
void Vacina::setDisponibilizacao(string disponibilizacao){}
double Vacina::getDosagem(){return 0;}
string Vacina::getAdministracao(){return " ";}
string Vacina::getDisponibilizacao(){return " ";}
void   Vacina::setTipoEpi(string tipoEpi){}
void   Vacina::setDescricao(string descricao){}
string Vacina::getTipoEpi(){return "";}
string Vacina::getDescricao(){return "";}
*/