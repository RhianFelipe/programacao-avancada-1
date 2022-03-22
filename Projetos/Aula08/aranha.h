#pragma once

#include <iostream>
#include <string>

class Aranha {
public:
    Aranha(std::string nome) : _nome(nome) {}

    void soltarTeias() {
        std::cout << _nome << " está soltando teias como aranha" << std::endl;
    }

    void escalarParedes() {
        std::cout << _nome << " está escalando paredes" << std::endl;
    }

protected:
    std::string _nome;
};
