#ifndef SCANDADOS_H_
#define SCANDADOS_H_

#include <iostream>
#include <vector>
#include "Vacina.h"
#include "Medicamento.h"
#include "Epi.h"
#include "Insumo.h"

void novaVacina(vector<Insumo*> &ms){
    system("clear");
    string str;
    int numI; double numD;
    
    Vacina *vac = new Vacina();

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

void novoEPI(vector<Insumo*> &ms){
    system("clear");
    string str;
    int numI; double numD;
    
    Epi *epi = new Epi();


    cout << "\nNome: ";
    getline(cin, str, '\n');
    getline(cin, str);
    epi->setNome(str);

    cout << "\nPreco: ";
    cin >> numD;
    epi->setPreco(numD);

    cout << "\nQuantidade: ";
    cin >> numI;
    epi->setQuantidade(numI);

    cout << "\nVencimento: ";
    getline(cin, str, '\n');
    getline(cin, str);
    epi->setVencimento(str);

    cout << "\nFabricante: ";
    getline(cin, str);
    epi->setFabricante(str);

    cout << "\nTipo do EPI: ";
    getline(cin, str);
    epi->setTipoEpi(str);

    cout << "\nDescricao do EPI: ";
    getline(cin, str);
    epi->setDescricao(str);

    epi->criaInsumo(*epi, ms);
}


#endif