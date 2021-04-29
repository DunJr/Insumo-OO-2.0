#include <iostream>
#include <vector>
#include "Vacina.h"
#include "Medicamento.h"
#include "Epi.h"
#include "Insumo.h"


void menuG(){
  cout << "\t\t<Menu>\n" << endl;
  cout << "\t1- Cadastrar insumo." << endl;
  cout << "\t2- Disponibilidade de insumos estoque."    << endl;
  cout << "\t3- Descrição dos insumos em estoque."      << endl;
  cout << "\t4- Listar insumos em estoque por tipo."    << endl;
  cout << "\t5- Lista de insumos distribuidos."         << endl;
  cout << "\t6- Descrição dos insumos distribuidos."    << endl;
  cout << "\t7- Listar insumos distribuidos por tipo."  << endl;
  cout << "\t8- Listar insumos distribuidos por estado."<< endl;
  cout << "\t9- Enviar Insumo para um Estado."          << endl;
  cout << "\t0- Sair."                                  << endl;
  cout << "\nEscolha: ";
}

void menuTipo(){
  cout << "\t\t<Tipos de Insumo>\n" << endl;
  cout << "\t1- Vacina." << endl;
  cout << "\t2- Medicamento." << endl;
  cout << "\t3- EPI." << endl;
  cout << "\t4- Voltar." << endl;
  cout << "\nEscolha: ";
}

void menuEstados(){
  cout << "\t\t<Estados>\n"             << endl;
  cout << "\t1-  Acre."                 << endl;
  cout << "\t2-  Alagoas."              << endl;
  cout << "\t3-  Amapa."                << endl;
  cout << "\t4-  Amazonas."             << endl;
  cout << "\t5-  Bahia."                << endl;
  cout << "\t6-  Ceara."                << endl;
  cout << "\t7-  Distrito Federal."     << endl;
  cout << "\t8-  Espirito Santo."       << endl;
  cout << "\t9-  Goias."                << endl;
  cout << "\t10- Maranhao."             << endl;
  cout << "\t11- Mato Grosso."          << endl;
  cout << "\t12- Mato Grosso do Sul."   << endl;
  cout << "\t13- Minas Gerais."         << endl;
  cout << "\t14- Para."                 << endl;
  cout << "\t15- Paraiba."              << endl;
  cout << "\t16- Parana."               << endl;
  cout << "\t17- Pernambuco."           << endl;
  cout << "\t18- Piaui."                << endl;
  cout << "\t19- Rio de Janeiro."       << endl;
  cout << "\t20- Rio Grande do Norte."  << endl;
  cout << "\t21- Rio Grande do Sul."    << endl;
  cout << "\t22- Rondonia."             << endl;
  cout << "\t23- Roraima."              << endl;
  cout << "\t24- Santa Catarina."       << endl;
  cout << "\t25- Sao Paulo."            << endl;
  cout << "\t26- Sergipe."              << endl;
  cout << "\t27- Tocantins."            << endl;
  cout << "\nEscolha: ";
}

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

void novaVacina(vector<Insumo*> &ms){
    system("clear");
    string str;
    int numI; double numD;
    
    Vacina *vac = new Vacina();

    //vac.criaInsumo(int tipoI, std::string nome, double preco, int quantidade, std::string vencimento, std::string fabricante, std::string local, std::string tipoVacina, int numeroDoses, int intervalo)
    
    cout << "\nNome: ";
    getline(cin, str, '\n');
    getline(cin, str);
    vac->setNome(str);

    cout << "\nPreco: ";
    cin >> numD;
    vac->setPreco(numD);

    cout << "\nQuantidade: ";
    cin >> numI;
    vac->setQuantidade(numI);

    cout << "\nVencimento: ";
    getline(cin, str, '\n');
    getline(cin, str);
    vac->setVencimento(str);

    cout << "\nFabricante: ";
    getline(cin, str);
    vac->setFabricante(str);

    cout << "\nTipo da vacina: ";
    getline(cin, str);
    vac->setTipoVacina(str);

    cout << "\nNumero de Doses(Tratamento completo): ";
    cin >> numI;
    vac->setNumeroDoses(numI);

    cout << "\nIntervalo entre as doses: ";
    cin >> numI;
    vac->setIntervalo(numI);

    
    vac->criaInsumo(*vac, ms);
}

void novoMedicamento(vector<Insumo*> &ms){
    system("clear");
    string str;
    int numI; double numD;
    
    //vac.criaInsumo(int tipoI, std::string nome, double preco, int quantidade, std::string vencimento, std::string fabricante, std::string local, std::string tipoVacina, int numeroDoses, int intervalo)
    
    Medicamento *med = new Medicamento();

    cout << "\nNome: ";
    getline(cin, str, '\n');
    getline(cin, str);
    med->setNome(str);

    cout << "\nPreco: ";
    cin >> numD;
    med->setPreco(numD);

    cout << "\nQuantidade: ";
    cin >> numI;
    med->setQuantidade(numI);

    cout << "\nVencimento: ";
    getline(cin, str, '\n');
    getline(cin, str);
    med->setVencimento(str);

    cout << "\nFabricante: ";
    getline(cin, str);
    med->setFabricante(str);

    cout << "\nAdministracao: ";
    getline(cin, str);
    med->setAdministracao(str);

    cout << "\nDisponibilizacao: ";
    getline(cin, str);
    med->setDisponibilizacao(str);

    cout << "\nDosagem: ";
    cin >> numD;
    med->setDosagem(numD);

    med->criaInsumo(*med, ms);

}

void novoInsumo(vector<Insumo*> &ms){
    int t;
    system("clear");

    t = escolhaTipo();
    
    if(t == 1){
        novaVacina(ms);
    }else if(t == 2){
        novoMedicamento(ms);
    }else{
        
    }
}

void listaSimples(vector<Insumo*> &ms){
    system("clear");
    Vacina vac;
    Medicamento med;

    vac.listaInsumosSimples(ms);
    med.listaInsumosSimples(ms);

    enterParaSair();
}

void MenuPrincipal(vector<Insumo*> &ms){
    int aux;

    do{
        aux = escolha();

    switch(aux){
      case 1:
        novoInsumo(ms);
            break;
        case 2:
        listaSimples(ms);
            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

            break;
        case 9:

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
    vector<Insumo*> ms;

    MenuPrincipal(ms);

    return 0;
}
