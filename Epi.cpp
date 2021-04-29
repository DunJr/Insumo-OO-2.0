#include "Epi.h"

int Epi::getTipoI(){
    return tipoI;
}

string Epi::getNome(){
    return nome;
}

double Epi::getPreco(){
    return preco;
}

int Epi::getQuantidade(){
    return quantidade;
}

string Epi::getVencimento(){
    return vencimento;
}

string Epi::getFabricante(){
    return fabricante;
}

string Epi::getLocal(){
    return local;
}

string Epi::getTipoEpi(){
    return tipoEpi;
}

string Epi::getDescricao(){
    return descricao;
}

void Epi::setTipoI(int tipoI){
    this->tipoI = tipoI;
}

void Epi::setNome(string nome){
    this->nome = nome;
}

void Epi::setPreco(double preco){
    this->preco = preco;
}

void Epi::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

void Epi::setVencimento(string vencimento){
    this->vencimento = vencimento;
}

void Epi::setFabricante(string fabricante){
    this->fabricante = fabricante;
}

void Epi::setLocal(string local){
    this->local = local;
}

void Epi::setTipoEpi(string tipoEpi){
    this->tipoEpi = tipoEpi;
}

void Epi::setDescricao(string descricao){
    this->descricao = descricao;
}

Epi::Epi(){
    tipoI = 3;
    nome = " ";
    preco = 0;
    quantidade = 0;
    vencimento = " ";
    fabricante = " ";
    local = "Estoque";
    tipoEpi = " ";
    descricao = " ";
}

void Epi::criaInsumo(Epi &epi, vector<Insumo*> &ms){
    ms.push_back(&epi);
}

void Epi::listaInsumosSimples(vector<Insumo*> &ms){

    if(ms.size() == 0){
        cout << "Sem EPI's no estoque." << endl;
        return;
    }
    for(int i = 0; i < ms.size(); i++){
        if(ms[i]->getTipoI() == 3){
            cout << "Insumo " << i+1 << ":"                             << endl;
            cout << "Tipo do insumo: Vacina"                            << endl;
            cout << "Nome do insumo: "      << ms[i]->getNome()         << endl;
            cout << "Quantidade do insumo: "<< ms[i]->getQuantidade()   << endl;
            cout << "Codigo de barra: "     << i                        << endl;
            cout << "\n"                                                << endl;
        }
    }
}













/*
string Epi::getTipoVacina(){return " ";}
int Epi::getNumeroDoses(){return 0;}
int Epi::getIntervalo(){return 0;}
void Epi::setTipoVacina(string tipoVacina){}
void Epi::setNumeroDoses(int numeroDoses){}
void Epi::setIntervalo(int intervalo){}
void Epi::setDosagem(double dosagem){}
void Epi::setAdministracao(string administracao){}
void Epi::setDisponibilizacao(string disponibilizacao){}
double Epi::getDosagem(){return 0;}
string Epi::getAdministracao(){return " ";}
string Epi::getDisponibilizacao(){return " ";}
*/