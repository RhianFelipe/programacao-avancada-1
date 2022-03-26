#pragma once

#include <iostream>

// Interface
// - É uma estrutura composta apenas por métodos abstratos
// - Serve como um contrato para interação entre classes
// - Não possui atributos

class Lista {
public:
    virtual void inserir(int item) = 0;
    virtual int remover(int posicao) = 0;
    virtual int consultar(int posicao) = 0;
    virtual void ordenar() = 0;
    virtual int getTamanho() = 0;
};

class ListaEncadeada : public Lista {
public:
    void inserir(int item) { };
    int remover(int posicao) { };
    int consultar(int posicao) { };
    void ordenar()  { };
    int getTamanho() { };
};

class ListaSequencial : public Lista {
public:
    void inserir(int item) { };
    int remover(int posicao) { };
    int consultar(int posicao) { };
    void ordenar()  { };
    int getTamanho() { };
};


