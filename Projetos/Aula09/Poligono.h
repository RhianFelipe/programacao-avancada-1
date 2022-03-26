#pragma once

#include <iostream>

// Classe abstrata
//  - É uma classe que contém pelo menos um método abstrato
//  - Um método abstrato é um método sem implementação

// Servem para estruturação do projeto orientado a objetos
// Criar classes pai com a única finalidade de agregar métodos
//  e atributos em comum

// As filhas devem implementar os métodos abstratos
// Senão, elas serão abstratas também

// Classes abstratas não podem ser instanciadas

class Poligono {
public:
    Poligono(int numLados) : _numLados(numLados) {
        std::cout << "Poligono: " << numLados << " lados" << std::endl;
    }

    ~Poligono() {
        std::cout << "Destruindo poligono" << std::endl;
    }

    // Este é um método abstrato
    // Em C++, método virtual puro
    virtual void desenha() const = 0;

    void imprimeLados() const {
        std::cout << "nLados = " << _numLados << std::endl;
    }

private:
    int _numLados;
};
