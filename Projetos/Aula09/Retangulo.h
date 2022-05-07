#pragma once

#include "Poligono.h"

class Retangulo : public Poligono{
public:-
    Retangulo(int base, int altura) : Poligono(4),
                                      _base(base),
                                      _altura(altura) {
        std::cout << "Retangulo: iniciando " << std::endl;
    }

    ~Retangulo() {
        std::cout << "Destruindo retangulo" << std::endl;
    }

    void desenha() const {
        std::cout << "Desenhando retangulo" << std::endl;
    }

    float getArea() const {
        return _base * _altura;
    }

private:
    int _base;
    int _altura;
};
