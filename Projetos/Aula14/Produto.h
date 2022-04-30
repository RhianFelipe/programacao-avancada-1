#pragma once

#include <string>

class Produto {
public:
    Produto(std::string nome = "", float preco = 0, int quantidade = 0) :
            _nome(nome),
            _preco(preco),
            _quantidade(quantidade) {
        // vazio
    }

    const std::string &getNome() const {
        return _nome;
    }

    void setNome(const std::string &nome) {
        _nome = nome;
    }

    float getPreco() const {
        return _preco;
    }

    void setPreco(float preco) {
        _preco = preco;
    }

    int getQuantidade() const {
        return _quantidade;
    }

    void setQuantidade(int quantidade) {
        _quantidade = quantidade;
    }

    virtual ~Produto() {}


private:
    std::string _nome;
    float _preco;
    int _quantidade;
};
