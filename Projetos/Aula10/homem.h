#pragma once

#include <iostream>
#include <string>

class Homem {
public:
    Homem(std::string nome) : _nome(nome) {}

    virtual void andar() {
        std::cout << _nome << " está andando" << std::endl;
    }

    virtual void correr();

    virtual void falar();

    // Método virtual puro - método abstrato
    //virtual void imprime() = 0;

private:
    std::string _nome;
};

inline void Homem::correr() {
    std::cout << _nome << " está correndo" << std::endl;
}
