#pragma once

#include "Poligono.h"

// Tipos de herança:
// - public: mantém o permissionamento da classe pai
// - protected:
//      - público no pai, vira protegido no filho
// - private:
//      - público no pai, vira privado no filho
//      - protegido no pai, vira privado no filho

class Triangulo : public Poligono{
public:
    Triangulo(int base, int altura) : Poligono(3),
                                      _base(base),
                                      _altura(altura) {
        std::cout << "Triangulo: iniciando " << std::endl;
    }

    ~Triangulo() {
        std::cout << "Destruindo triangulo" << std::endl;
    }

    void desenha() const {
        std::cout << "Desenhando triangulo" << std::endl;
    }

    float getArea() const {
        return (_base * _altura) / 2.0;
    }

private:
    int _base;
    int _altura;
};
