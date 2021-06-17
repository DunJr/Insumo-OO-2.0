#include <iostream>
#include <vector>
#include "Vacina.h"
#include "Medicamento.h"
#include "Epi.h"
#include "Insumo.h"
#include "ScanDados.h"
#include "Menus.h"

int escolha(){
    int num;

    system("clear");
    menuG();
    cin >> num;
    return num;
}

int escolhaTipo(){
    int num;
    system("clear");
    menuTipo();
    cin >> num;
    return num;
}

void enterParaSair(){
    string aux;

    cout << "Pressione Enter para sair" << endl;
    getline(cin, aux, '\n');
    getline(cin, aux);
}

bool estoqueVazio(vector<Insumo*> &ms){
    if(ms.size() == 0){
        return true;
    }else{
        return false;
    }
}

void novoInsumo(vector<Insumo*> &ms){
    int t;
    system("clear");

    do{
        t = escolhaTipo();
        if(t == 1){
            novaVacina(ms);
        }else if(t == 2){
            novoMedicamento(ms);
        }else if(t == 3){
            novoEPI(ms);
        }else if(t == 4){
            break;
        }else{
            cout << "Opção invalida, Tente novamente..." << endl;
            usleep(2000);
        }
    }while((t < 0) || (t > 4));
}

void listaEstoqueSimples(vector<Insumo*> &ms){
    system("clear");
    Vacina vac;
    Medicamento med;
    Epi epi;

    vac.listaInsumosSimples(ms);
    med.listaInsumosSimples(ms);
    epi.listaInsumosSimples(ms);
}

void listaEstoqueCompleto(vector<Insumo*> &ms){
    system("clear");
    Vacina vac;
    Medicamento med;
    Epi epi;

    vac.listaInsumosCompleta(ms);
    med.listaInsumosCompleta(ms);
    epi.listaInsumosCompleta(ms);

    enterParaSair();
}

void enviaInsumo(vector<Insumo*> &ms, vector<Insumo*> &he){
    string estado;
    int aux, aux2, cont;

    Vacina *auxVac;
    Medicamento *auxMed;
    Epi *auxEpi;

    if(estoqueVazio(ms)){
        system("clear");
        cout << "Estoque vazio." << endl;
        getline(cin, estado, '\n');
        getline(cin, estado);
        return;
    }

    do{
        listaEstoqueSimples(ms);
        cout << "Codigo do insumo enviado: ";
        cin >> aux;

        if((aux < 0) || (aux > (ms.size()-1))){
            cout << "Opção invalida, Tente novamente..." << endl;
            usleep(2000);
            continue;
        }

        do{
            cout << "Numero de unidades enviadas: ";
            cin >> aux2;
            cont = ms[aux]->getQuantidade() - aux2;
            
            if(aux2 == ms[aux]->getQuantidade()){
                estado = selecEstados();
                ms[aux]->setLocal(estado);
                he.push_back(ms[aux]);
                ms.erase(ms.begin()+aux);
                return;
            }else if(aux2 < ms[aux]->getQuantidade()){
                estado = selecEstados();

                if(ms[aux]->getTipoI() ==  1){
                    auxVac = new Vacina((Vacina*)ms[aux]);
                    auxVac->setLocal(estado);
                    auxVac->setQuantidade(aux2);
                    he.push_back(auxVac);
                }else if(ms[aux]->getTipoI() ==  2){
                    auxMed = new Medicamento((Medicamento*)ms[aux]);
                    auxMed->setLocal(estado);
                    auxMed->setQuantidade(aux2);
                    he.push_back(auxMed);
                }else if(ms[aux]->getTipoI() ==  3){
                    auxEpi = new Epi((Epi*)ms[aux]);
                    auxEpi->setLocal(estado);
                    auxEpi->setQuantidade(aux2);
                    he.push_back(auxEpi);
                }
                ms[aux]->setQuantidade(cont);
                return;
            }else{
                cout << "Opção invalida, Tente novamente..." << endl;
                usleep(2000);
            }
        }while(1);
    }while(1);



    estado = selecEstados();
}


void listaEstoqueTipo(vector<Insumo*> &ms){
    system("clear");
    Vacina vac;
    Medicamento med;
    Epi epi;
    int t;

        do{

        t = escolhaTipo();
        system("clear");
        
        if(t == 1){
            vac.listaInsumosSimples(ms);
            break;
        }else if(t == 2){
            med.listaInsumosSimples(ms);
            break;
        }else if(t == 3){
            epi.listaInsumosSimples(ms);
            break;
        }else if(t == 4){
            return;
        }else{
            cout << "Opção invalida, Tente novamente..." << endl;
            usleep(2000);
        }

    }while((t < 0) || (t > 4));

    enterParaSair();
}

void listaEntregasPorEstadoMain(vector<Insumo*> &he, string estado){

    if(he.size() == 0){
        cout << "Nenhuma remessa de EPI's entregue." << endl;
        return;
    }
    system("clear");
    for(int i = 0; i < he.size(); i++){
        if(he[i]->getLocal() == estado){
            cout << "Insumo " << i+1 << ":"                                     << endl;

            if(he[i]->getTipoI() == 1){
                cout << "Tipo do insumo: Vacina"                                << endl;
            }else if(he[i]->getTipoI() == 2){
                cout << "Tipo do insumo: Medicamento"                           << endl;
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

void MenuPrincipal(vector<Insumo*> &ms, vector<Insumo*> &he){
    string estado;
    int aux;
    do{
        aux = escolha();

    switch(aux){
      case 1:
            novoInsumo(ms);
            break;
        case 2:
            listaEstoqueSimples(ms);
            enterParaSair();
            break;
        case 3:
            listaEstoqueCompleto(ms);
            break;
        case 4:
            listaEstoqueTipo(ms);
            break;
        case 5:
            listaEstoqueSimples(he);
            enterParaSair();
            break;
        case 6:
            listaEstoqueCompleto(he);
            break;
        case 7:
            listaEstoqueTipo(he);
            break;
        case 8:
            estado = selecEstados();
            listaEntregasPorEstadoMain(he, estado);
            enterParaSair();
            break;
        case 9:
            enviaInsumo(ms, he);

            break;
        case 0:
        //sair

            break;
        default:
            cout << "Opção invalida, Tente novamente..." << endl;
            usleep(2000);
    }

    }while(aux != 0);
}

int main(){

    Insumo *a = new Vacina();

    vector<Insumo*> ms;
    vector<Insumo*> he;
    
    MenuPrincipal(ms, he);
    return 0;
}