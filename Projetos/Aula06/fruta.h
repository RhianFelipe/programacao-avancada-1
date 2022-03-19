#pragma once

#include <iostream>
#include <string>
#include "preco.h"



class Fruta {
public:
    Fruta(std::string nome = "",
          std::string cor = "",
          Preco preco = Preco(0)) : _nome(nome),
                                    _cor(cor),
                                    _preco(preco) {}

    void setNome(std::string nome) { _nome = nome ; }
    void setCor(std::string cor)   { _cor = cor ; }
    void setPreco(const Preco &preco)    { _preco = preco ; }

    std::string getNome() const    { return _nome; }
    std::string getCor() const     { return _cor; }
    Preco getPreco() const         { return _preco; }

    void imprimir() const {
        std::cout << getNome() << " ";
        std::cout << getCor() << " ";
        getPreco().imprimir(); // == _preco.imprime()
    }

    void aplicarDesconto(double desconto)  {
        double valor = _preco.getValor() - _preco.getValor() * desconto;
        _preco = Preco(valor);
    }

private:
    std::string _nome;
    std::string _cor;
    Preco _preco;
};

