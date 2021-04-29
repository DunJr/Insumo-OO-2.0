#ifndef EPI_H_
#define EPI_H_

#include <iostream>
#include <unistd.h>
#include <string>
#include <vector>
#include "Insumo.h"

using namespace std;

class Epi : public Insumo{
    private:
        int tipoI;
        string nome;
        double preco;
        int quantidade;
        string vencimento;
        string fabricante;
        string local;
        string tipoEpi;
        string descricao;

    public:

        Epi();

        int    getTipoI();
        string getNome();
        double getPreco();
        int    getQuantidade();
        string getVencimento();
        string getFabricante();
        string getLocal();
        string getTipoEpi();
        string getDescricao();

        void   setTipoI(int tipoI);
        void   setNome(string nome);
        void   setPreco(double preco);
        void   setQuantidade(int quantidade);
        void   setVencimento(string vencimento);
        void   setFabricante(string fabricante);
        void   setLocal(string local);
        void   setDosagem(double dosagem);
        void   setTipoEpi(string tipoEpi);
        void   setDescricao(string descricao);

        void   criaInsumo(Epi &epi, vector<Insumo*> &ms);
        void   listaInsumosSimples(vector<Insumo*> &ms);
        void   listaInsumosCompleta();
        void   listaInsumosTipo();

        void   listaEntregasSimples();
        void   listaEntregasCompleta();
        void   listaEntregasTipo();
        void   listaEntregasPorEstado();

        void   enviarInsumo();


        /*
        string getTipoVacina();// residuo
        int    getNumeroDoses();
        int    getIntervalo();
        double getDosagem();
        string getAdministracao();
        string getDisponibilizacao();
        void   setTipoVacina(string tipoVacina);
        void   setNumeroDoses(int numeroDoses);
        void   setIntervalo(int intervalo);
        void   setDosagem(double dosagem);
        void   setAdministracao(string administracao);
        void   setDisponibilizacao(string disponibilizacao);
        */
};

#endif    