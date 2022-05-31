#pragma once

#include <iostream>

//#include "calendario.h"

// Classes Amigas
//
// - Uma classe pode liberar o acesso a sua implementação
// interna para outra classe ou função
//


class Data {
public:
    Data(int dia, int mes, int ano) : _dia(dia),
                                      _mes(mes),
                                      _ano(ano) {
        // vazio
    }

    // Libera todo o acesso interno para a classe amiga
//    friend class Calendario;

    // Libera o acesso para os operadores << e >>
    friend std::ostream& operator<<(std::ostream &out, const Data &data);
    friend std::istream& operator>>(std::istream &in, Data &data);

    // Libera o acesso a apenas uma função
    // friend void Calendario::imprime(Data &data);

    int getDia() const {
        return _dia;
    }

    int getMes() const {
        return _mes;
    }

    int getAno() const {
        return _ano;
    }

private:
    int _dia;
    int _mes;
    int _ano;
};


// Sobrescreve o operador << e >> das classes de stream
inline std::ostream &operator<<(std::ostream &out, const Data &data) {
    out << data._dia << ";" << data._mes << ";" << data._ano;
    return out;
}

inline std::istream& operator>>(std::istream &in, Data &data) {
    char sep;
    in >> data._dia >> sep >> data._mes >> sep >> data._ano;
    return in;
}

