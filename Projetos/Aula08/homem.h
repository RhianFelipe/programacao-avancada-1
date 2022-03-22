#pragma once

#include <iostream>
#include <string>

class Homem {
public:
    Homem(std::string nome) : _nome(nome) {}

    void andar() {
        std::cout << _nome << " está andando" << std::endl;
    }

    void correr();

    void falar();

private:
    std::string _nome;
};

inline void Homem::correr() {
    std::cout << _nome << " está correndo" << std::endl;
}
