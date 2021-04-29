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
        int tipoI;
        string nome;
        double preco;
        int quantidade;
        string vencimento;
        string fabricante;
        string local;
        string tipoVacina;
        int numeroDoses;
        int intervalo;

    public:
        //vector<Vacina> estoque;
        //vector<Vacina> entregues;

        Vacina();//int tipoI, string nome, double preco, int quantidade, string vencimento, string fabricante, string local, string tipoVacina, int NumeroDoses, int intervalo

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
        void   listaInsumosCompleta();
        void   listaInsumosTipo();

        void   listaEntregasSimples();
        void   listaEntregasCompleta();
        void   listaEntregasTipo();
        void   listaEntregasPorEstado();

        void   enviarInsumo();


        /*
        void setDosagem(double dosagem);
        void setAdministracao(string administracao);
        void setDisponibilizacao(string disponibilizacao);
        double getDosagem();
        string getAdministracao();
        string getDisponibilizacao();
        void   setTipoEpi(string tipoEpi);
        void   setDescricao(string descricao);
        string getTipoEpi();
        string getDescricao();
        */

};

#endif    