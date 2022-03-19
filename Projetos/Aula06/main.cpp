#include <iostream>
using namespace std;

#include "eleitor.h"
#include "data.h"

int f1() {
    int x = 0;
    x++;
    cout << "f1: " << x << endl;
}

int f2() {
    static int x = 0;   // promovida para variavel global
    x++;
    cout << "f2: " << x << endl;
}


int main() {

    // Exemplo de função estática
//    f1();
//    f1();
//    f1();
//    f2();
//    f2();
//    f2();
//
//    Eleitor fred;
//    Eleitor velma;
//    Eleitor scooby;
//    cout << Eleitor::numEleitores << endl;
//    Eleitor salsicha;
//    cout << Eleitor::numEleitores << endl;

//    // Exemplo data
//    Data d1(12, 12, 2012);
//
////    Data calendario1[1000];             // Instancia 1000 objetos
////    Data *calendario2 = new Data[1000]; // Instancia 1000 objetos
//
//    Data* calendario3[1000];
//
//    calendario3[0] = &d1;
//    calendario3[1] = new Data(10, 10, 2010);
//
//    delete calendario3[1];
////    delete [] calendario2;

    // Alocação dinâmica

    // Cria um novo objeto - lembrar de liberar ele da memória
    Data *data = new Data(12, 12, 2012);

    // Libera o objeto da memória
    delete data;
    data = nullptr;

    // Cria um vetor de inteiros
    int *numeros = new int[1000];

    // Libera o vetor de inteiros
    delete[] numeros;

    // Cria um vetor de datas
    Data **datas = new Data*[10];   // Instancia o vetor

    for (int i = 0; i < 10; i++) {
        datas[i] = new Data(i, i, 2000 + i);    // Instancia as datas
    }

    // ... utiliza o vetor, etc

    // Libera as datas
    for (int i = 0; i < 10; i++) {
        delete datas[i];
    }

    // Libera o vetor
    delete[] datas;





    return 0;
}
