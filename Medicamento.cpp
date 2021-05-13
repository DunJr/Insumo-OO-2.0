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

Medicamento::Medicamento(Medicamento *med){
    this->tipoI = med->getTipoI();
    this->nome = med->getNome();
    this->preco = med->getPreco();
    this->quantidade = med->getQuantidade();
    this->vencimento = med->getVencimento();
    this->fabricante = med->getFabricante();
    this->local = med->getLocal();
    this->dosagem = med->getDosagem();
    this->administracao = med->getAdministracao();
    this->disponibilizacao = med->getDisponibilizacao();
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

void Medicamento::listaInsumosCompleta(vector<Insumo*> &ms){

    if(ms.size() == 0){
        cout << "Sem Medicamentos no estoque." << endl;
        return;
    }
    for(int i = 0; i < ms.size(); i++){
        if(ms[i]->getTipoI() == 2){
            Medicamento *auxMed = (Medicamento*)ms[i];
            cout << "Insumo " << i+1 << ":"                                  << endl;
            cout << "Tipo do insumo: Medicamento"                            << endl;
            cout << "Nome do insumo: "      << auxMed->getNome()             << endl;
            cout << "Quantidade do insumo: "<< auxMed->getQuantidade()       << endl;
            cout << "Preco: "               << auxMed->getPreco()            << endl;
            cout << "Vencimento: "          << auxMed->getVencimento()       << endl;
            cout << "Fabricante: "          << auxMed->getFabricante()       << endl;
            cout << "Dosagem(mg): "         << auxMed->getDosagem()          << endl;
            cout << "Administracao: "       << auxMed->getAdministracao()    << endl;
            cout << "Disponibilidade: "     << auxMed->getDisponibilizacao() << endl;
            cout << "Local: "               << auxMed->getLocal()            << endl;
            cout << "Codigo de barra: "     << i                             << endl;
            cout << "\n"                                                     << endl;
        }
    }
}

void Medicamento::listaEntregasPorEstado(vector<Insumo*> &he, string estado){

    if(he.size() == 0){
        cout << "Nenhuma remessa de Medicamentos's entregue." << endl;
        return;
    }
    for(int i = 0; i < he.size(); i++){
        if(he[i]->getLocal() == estado){
            cout << "Insumo " << i+1 << ":"                                 << endl;
            cout << "Tipo do insumo: Epi"                                   << endl;
            cout << "Nome do insumo: "          << he[i]->getNome()         << endl;
            cout << "Quantidade do insumo: "    << he[i]->getQuantidade()   << endl;
            cout << "Estado destinatario: "     << he[i]->getLocal()        << endl;
            cout << "\n"                                                    << endl;
        }
    }
}