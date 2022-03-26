#pragma once

#include "Retangulo.h"

class Quadrado : public Retangulo{
public:
    Quadrado(int lado) : Retangulo(lado, lado) {
        std::cout << "Quadrado: iniciando " << std::endl;
    }

    ~Quadrado() {
        std::cout << "Destruindo quadrado" << std::endl;
    }

    void desenha() const {
        std::cout << "Desenhando quadrado" << std::endl;
    }
};
