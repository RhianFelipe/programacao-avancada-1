#pragma once

class Preco {
public:
    // 3.14
    Preco(double valor) : _valor(int(valor * 100)) {}

    double getValor() const {
        return _valor / 100.0;
    }

    void imprimir();

private:
    int _valor; // 314 centavos
};

