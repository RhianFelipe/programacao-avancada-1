#pragma once

#include <string>

class ComparaPessoasPorIdade;

class Pessoa {
public:
    Pessoa(std::string nome, int idade) : _nome(nome), _idade(idade) {}

    friend class ComparaPessoasPorIdade;

    bool operator<(const Pessoa &outra) const {
        return _nome < outra._nome;
    }

    const std::string &getNome() const {
        return _nome;
    }

    int getIdade() const {
        return _idade;
    }

private:
    std::string _nome;
    int _idade;
};


class ComparaPessoasPorIdade {
public:
    bool operator()(const Pessoa &p1, const Pessoa &p2) {
        return p1._idade < p2._idade;
    }
};
