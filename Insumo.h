#ifndef INSUMO_H_
#define INSUMO_H_

#include <iostream>
#include <unistd.h>
#include <string>
#include <vector>

using namespace std;

class Insumo{
    protected:
        int tipoI;
        string nome;
        double preco;
        int quantidade;
        string vencimento;
        string fabricante;
        string local;

    public:

        virtual int    getTipoI() = 0;
        virtual string getNome() = 0;
        virtual double getPreco() = 0;
        virtual int    getQuantidade() = 0;
        virtual string getVencimento() = 0;
        virtual string getFabricante() = 0;
        virtual string getLocal() = 0;
        

        virtual void   setTipoI(int tipoI) = 0;
        virtual void   setNome(string nome) = 0;
        virtual void   setPreco(double preco) = 0;
        virtual void   setQuantidade(int quantidade) = 0;
        virtual void   setVencimento(string vencimento) = 0;
        virtual void   setFabricante(string fabricante) = 0;
        virtual void   setLocal(string local) = 0;
        

        void enviarInsumo();

};

#endif    