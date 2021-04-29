#ifndef INSUMO_H_
#define INSUMO_H_

#include <iostream>
#include <unistd.h>
#include <string>
#include <vector>

using namespace std;

class Insumo{
    public:
        //vector<Insumo> *insumos;
        //Insumo();

        virtual int    getTipoI() = 0;
        virtual string getNome() = 0;
        virtual double getPreco() = 0;
        virtual int    getQuantidade() = 0;
        virtual string getVencimento() = 0;
        virtual string getFabricante() = 0;
        virtual string getLocal() = 0;
        // string getTipoVacina();
        // int    getNumeroDoses();
        // int    getIntervalo();
        // double getDosagem();
        // string getAdministracao();
        // string getDisponibilizacao();
        // string getTipoEpi();
        // string getDescricao();
        

        virtual void   setTipoI(int tipoI) = 0;
        virtual void   setNome(string nome) = 0;
        virtual void   setPreco(double preco) = 0;
        virtual void   setQuantidade(int quantidade) = 0;
        virtual void   setVencimento(string vencimento) = 0;
        virtual void   setFabricante(string fabricante) = 0;
        virtual void   setLocal(string local) = 0;
        // void   setTipoVacina(string tipoVacina);
        // void   setNumeroDoses(int numeroDoses);
        // void   setIntervalo(int intervalo);
        // void   setDosagem(double dosagem);
        // void   setAdministracao(string administracao);
        // void   setDisponibilizacao(string disponibilizacao);
        // void   setTipoEpi(string tipoEpi);
        // void   setDescricao(string descricao);
        

        // void   criaInsumo();
        // void   listaInsumosSimples();
        // void   listaInsumosCompleta();
        // void   listaInsumosTipo();

        // void   listaEntregasSimples();
        // void   listaEntregasCompleta();
        // void   listaEntregasTipo();
        // void   listaEntregasPorEstado();

        void enviarInsumo();

};

#endif    