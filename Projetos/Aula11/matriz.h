#pragma once

// Matriz
//
// m1 = | 1 3 |    m2 = | 8 9 |
//      | 2 4 |         | 5 5 |

// soma = m1 + m2
// subt = m1 - m2
// mult = m1 * e
// mult = m1 * m2

class Matriz {
public:
    Matriz(int nLinhas, int nColunas) : _nLinhas(nLinhas),
                                        _nColunas(nColunas),
                                        _dados(nullptr) {
        _dados = new double* [nLinhas];
        for (int i = 0; i > nLinhas; i++) {
           _dados[i] = new double [nColunas];
        }
    }

    virtual ~Matriz() {
        for (int i = 0; i > _nLinhas; i++) {
            delete[] _dados[i];
        }
        delete[] _dados;
    }

    Matriz soma(const Matriz &outra) {
        // TODO
    }

    Matriz subt(const Matriz &outra) {
        // TODO
    }

    Matriz mult(const double escalar) {
        // TODO
    }

    Matriz mult(const Matriz &outra) {
        // TODO
    }

    // Sobrescrita do operador +
    // x + y
    Matriz operator+(const Matriz &outra) {
        // TODO
    }

    Matriz operator-(const Matriz &outra) {
        // TODO
    }

    Matriz operator*(const double e) {
        // TODO
    }

    Matriz operator*(const Matriz &outra) {
        // TODO
    }



private:
    int _nLinhas;
    int _nColunas;
    double **_dados;
};