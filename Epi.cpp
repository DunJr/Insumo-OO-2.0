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

Epi::Epi(Epi *epi){
    this->tipoI = epi->getTipoI();
    this->nome = epi->getNome();
    this->preco = epi->getPreco();
    this->quantidade = epi->getQuantidade();
    this->vencimento = epi->getVencimento();
    this->fabricante = epi->getFabricante();
    this->local = epi->getLocal();
    this->tipoEpi = epi->getTipoEpi();
    this->descricao = epi->getDescricao();
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
            cout << "Tipo do insumo: Epi"                               << endl;
            cout << "Nome do insumo: "      << ms[i]->getNome()         << endl;
            cout << "Quantidade do insumo: "<< ms[i]->getQuantidade()   << endl;
            cout << "Codigo de barra: "     << i                        << endl;
            cout << "\n"                                                << endl;
        }
    }
}

void Epi::listaInsumosCompleta(vector<Insumo*> &ms){

    if(ms.size() == 0){
        cout << "Sem EPI's no estoque." << endl;
        return;
    }
    for(int i = 0; i < ms.size(); i++){
        if(ms[i]->getTipoI() == 3){
            Epi *auxEpi = (Epi*)ms[i];
            cout << "Insumo " << i+1 << ":"                             << endl;
            cout << "Tipo do insumo: Epi"                               << endl;
            cout << "Nome do insumo: "      << auxEpi->getNome()        << endl;
            cout << "Quantidade do insumo: "<< auxEpi->getQuantidade()  << endl;
            cout << "Preco: "               << auxEpi->getPreco()       << endl;
            cout << "Vencimento: "          << auxEpi->getVencimento()  << endl;
            cout << "Fabricante: "          << auxEpi->getFabricante()  << endl;
            cout << "Tipo do Epi: "         << auxEpi->getTipoEpi()     << endl;
            cout << "Descricao: "           << auxEpi->getDescricao()   << endl;
            cout << "Local: "               << auxEpi->getLocal()       << endl;
            cout << "Codigo de barra: "     << i                        << endl;
            cout << "\n"                                                << endl;
        }
    }
}



/*
void Epi::listaEntregasPorEstado(vector<Insumo*> &he, string estado){

    if(he.size() == 0){
        cout << "Nenhuma remessa de EPI's entregue." << endl;
        return;
    }
    for(int i = 0; i < he.size(); i++){
        if(he[i]->getLocal() == estado){
            cout << "Insumo " << i+1 << ":"                                     << endl;

            if(he[i]->getTipoI() == 1){
                cout << "Tipo do insumo: Epi"                                   << endl;
            }else if(he[i]->getTipoI() == 2){
                cout << "Tipo do insumo: Epi"                                   << endl;
            }else if(he[i]->getTipoI() == 3){
                cout << "Tipo do insumo: Epi"                                   << endl;
            }

            cout << "Nome do insumo: "          << he[i]->getNome()         << endl;
            cout << "Quantidade do insumo: "    << he[i]->getQuantidade()   << endl;
            cout << "Estado destinatario: "     << he[i]->getLocal()        << endl;
            cout << "\n"                                                    << endl;
        }
    }

}
*/