// #ifndef SCANDADOS_H_
// #define SCANDADOS_H_

#include <iostream>

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

string selecEstados(){
    string estados[] = {"Acre", "Alagoas", "Amapa", "Amazonas", "Bahia", "Ceara", "Distrito Federal", "Espirito Santo", "Goias", "Maranhao", "Mato Grosso", "Mato Grosso do Sul", "Minas Gerais", "Para", "Paraiba", "Parana", "Pernambuco", "Piaui", "Rio de Janeiro", "Rio Grande do Norte", "Rio Grande do Sul", "Rondonia", "Roraima", "Santa Catarina", "Sao Paulo", "Sergipe", "Tocantins"};
    int aux;

    do{
        system("clear");
        menuEstados();
        cin >> aux;
        aux--;
        if((aux > 0) || (aux < 28)){
            return estados[aux];
        }else{
            system("clear");
            cout << "Opção invalida, Tente novamente..." << endl;
            usleep(2000);
        }
    }while(1);

}

// #endif