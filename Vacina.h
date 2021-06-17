#ifndef VACINA_H_
#define VACINA_H_

#include <iostream>
#include <unistd.h>
#include <string>
#include <vector>
#include "Insumo.h"

using namespace std;

class Vacina : public Insumo{
    private:
        // int tipoI;
        // string nome;
        // double preco;
        // int quantidade;
        // string vencimento;
        // string fabricante;
        // string local;
        string tipoVacina;
        int numeroDoses;
        int intervalo;

    public:
        Vacina();
        Vacina(Vacina *vac);

        int    getTipoI();
        string getNome();
        double getPreco();
        int    getQuantidade();
        string getVencimento();
        string getFabricante();
        string getLocal();
        string getTipoVacina();
        int    getNumeroDoses();
        int    getIntervalo();

        void   setTipoI(int tipoI);
        void   setNome(string nome);
        void   setPreco(double preco);
        void   setQuantidade(int quantidade);
        void   setVencimento(string vencimento);
        void   setFabricante(string fabricante);
        void   setLocal(string local);
        void   setTipoVacina(string tipoVacina);
        void   setNumeroDoses(int numeroDoses);
        void   setIntervalo(int intervalo);

        void   criaInsumo(Vacina &vac, vector<Insumo*> &ms);
        void   listaInsumosSimples(vector<Insumo*> &ms);
        void   listaInsumosCompleta(vector<Insumo*> &ms);
        void   listaInsumosTipo();

        void   listaEntregasSimples();
        void   listaEntregasCompleta();
        void   listaEntregasTipo();
        void   listaEntregasPorEstado(vector<Insumo*> &he, string estado);

        void   enviarInsumo();
};

#endif    