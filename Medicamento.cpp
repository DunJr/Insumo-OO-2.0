#include "Medicamento.h"

using namespace std;

int Medicamento::getTipoI(){
    return tipoI;
}

string Medicamento::getNome(){
    return nome;
}

double Medicamento::getPreco(){
    return preco;
}

int Medicamento::getQuantidade(){
    return quantidade;
}

string Medicamento::getVencimento(){
    return vencimento;
}

string Medicamento::getFabricante(){
    return fabricante;
}

string Medicamento::getLocal(){
    return local;
}

double Medicamento::getDosagem(){
    return dosagem;
}

string Medicamento::getAdministracao(){
    return administracao;
}

string Medicamento::getDisponibilizacao(){
    return disponibilizacao;
}


void Medicamento::setTipoI(int tipoI){
    this->tipoI = tipoI;
}

void Medicamento::setNome(string nome){
    this->nome = nome;
}

void Medicamento::setPreco(double preco){
    this->preco = preco;
}

void Medicamento::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

void Medicamento::setVencimento(string vencimento){
    this->vencimento = vencimento;
}

void Medicamento::setFabricante(string fabricante){
    this->fabricante = fabricante;
}

void Medicamento::setLocal(string local){
    this->local = local;
}

void Medicamento::setDosagem(double dosagem){
    this->dosagem = dosagem;
}

void Medicamento::setAdministracao(string administracao){
    this->administracao = administracao;
}

void Medicamento::setDisponibilizacao(string disponibilizacao){
    this->disponibilizacao = disponibilizacao;
}

Medicamento::Medicamento(){
    tipoI = 2;
    nome = " ";
    preco = 0;
    quantidade = 0;
    vencimento = " ";
    fabricante = " ";
    local = "Estoque";
    dosagem = 0;
    administracao = " ";
    disponibilizacao = " ";
}

void Medicamento::criaInsumo(Medicamento &med, vector<Insumo*> &ms){
    ms.push_back(&med);
}

void Medicamento::listaInsumosSimples(vector<Insumo*> &ms){

    if(ms.size() == 0){
        cout << "Sem Medicamentos no estoque." << endl;
        return;
    }else{
        for(int i = 0; i < ms.size(); i++){
            if(ms[i]->getTipoI() == 2){
                cout << "Insumo " << i+1 << ":"                             << endl;
                cout << "Tipo do insumo: Medicamento"                       << endl;
                cout << "Nome do insumo: "      << ms[i]->getNome()         << endl;
                cout << "Quantidade do insumo: "<< ms[i]->getQuantidade()   << endl;
                cout << "Codigo de barra: "     << i                        << endl;
                cout << "\n"                                                << endl;
            }
        }
    }
}













/*
string Medicamento::getTipoVacina(){return " ";}
int Medicamento::getNumeroDoses(){return 0;}
int Medicamento::getIntervalo(){return 0;}
void Medicamento::setTipoVacina(string tipoVacina){}
void Medicamento::setNumeroDoses(int numeroDoses){}
void Medicamento::setIntervalo(int intervalo){}
void   Medicamento::setTipoEpi(string tipoEpi){}
void   Medicamento::setDescricao(string descricao){}
string Medicamento::getTipoEpi(){return "";}
string Medicamento::getDescricao(){return "";}
*/