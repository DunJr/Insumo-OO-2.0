#ifndef MEDICAMENTO_H_
#define MEDICAMENTO_H_

#include <iostream>
#include <unistd.h>
#include <string>
#include <vector>
#include "Insumo.h"

using namespace std;

class Medicamento : public Insumo{
    private:
        int tipoI;
        string nome;
        double preco;
        int quantidade;
        string vencimento;
        string fabricante;
        string local;
        double dosagem;
        string administracao;
        string disponibilizacao;

    public:
        Medicamento();
        Medicamento(Medicamento *med);

        int    getTipoI();
        string getNome();
        double getPreco();
        int    getQuantidade();
        string getVencimento();
        string getFabricante();
        string getLocal();
        double getDosagem();
        string getAdministracao();
        string getDisponibilizacao();

        void   setTipoI(int tipoI);
        void   setNome(string nome);
        void   setPreco(double preco);
        void   setQuantidade(int quantidade);
        void   setVencimento(string vencimento);
        void   setFabricante(string fabricante);
        void   setLocal(string local);
        void   setDosagem(double dosagem);
        void   setAdministracao(string administracao);
        void   setDisponibilizacao(string disponibilizacao);

        void   criaInsumo(Medicamento &med, vector<Insumo*> &ms);
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