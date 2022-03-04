#ifndef __DATA_H__
#define __DATA_H__

// Inclusão de bibliotecas
#include <string>

// Definição de constantes
//#define MIN_ANO 2000

// Definição de apelidos
//typedef int Dia;

// Modelo matematico dos dados - struct / classes
struct Data {
    int dia;
    int mes;
    int ano;
};

// Protótipos de funções: operações que atuam sobre o modelo
Data dataIniciar(int d, int m, int a);
std::string dataTexto(Data data);
void dataImprimir(Data data);

#endif