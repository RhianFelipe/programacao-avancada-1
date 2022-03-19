#pragma once

#include <iostream>

class Data {
public:
    Data(int dia = 0, int mes = 0, int ano = 0) :
            _dia(dia),
            _mes(mes),
            _ano(ano) {
        std::cout << "Instanciando data" << std::endl;
    }

private:
    int _dia;
    int _mes;
    int _ano;
};
