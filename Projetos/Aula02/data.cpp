#include <iostream>
#include "data.h"

using namespace std;

// Operações do TAD
Data dataIniciar(int d, int m, int a) {
    Data data;
    data.dia = d;
    data.mes = m;
    data.ano = a;
    return data;
}

std::string dataTexto(Data data) {
    // TODO
}

void dataImprimir(Data data) {
    cout << data.dia << "/";
    cout << data.mes << "/";
    cout << data.ano << endl;
}