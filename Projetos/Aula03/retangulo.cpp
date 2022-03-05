#include <iostream>
using namespace std;

#include "retangulo.h"

// Construtor:
// - deve inicializar o objeto
// - e somente isso!!!

Retangulo::Retangulo() : _base(0), _altura(0) {
}

Retangulo::Retangulo(int base, int altura) : _base(base), _altura(altura) {
}

Retangulo::Retangulo(int lado) : _base(lado), _altura(lado) {
}

Retangulo::~Retangulo() {
    // vazio!
}

// Métodos gerais
int Retangulo::calcularArea() {
    return _base * _altura;
}

int Retangulo::calcularPerimetro() {
    return 2 * _base + 2 * _altura;
}

void Retangulo::desenhar() {
    for (int i = 0; i < _base; i++) {
        for (int j = 0; j < _altura; j++) {
            cout << "* ";
        }
        cout << endl;
    }

}
