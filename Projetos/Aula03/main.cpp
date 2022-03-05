#include <iostream>
using namespace std;

#include "retangulo.h"


class B {
public:
    B();
};

B::B() {
    cout << "Criando B" << endl;
}

class A {
public:
    A(B b);

private:
    B _b;
};

A::A(B b) : _b(b) {
    cout << "Criando A" << endl;
}

// Macros
// + sintaxe de função
// + sem chamada de ativação
// - sem validação de tipo
// - sem indicação de tipo de retorno
// - código poluído

#define SOMA(a, b) ((a) + (b))

// Funções inline
// + segue mesma regra de função
// + sem chamada de ativação - substituída em tempo de compilação
// - torna compilação mais lenta
// Somente utilizada para códigos simples

inline int soma(int a, int b) {
    return a + b;
}


// CImg.h - processamento de imagens


int main() {
    Retangulo r1;        // Construtor vazio
    Retangulo r2(r1);    // Construtor de cópia;
    Retangulo r3(10, 20); // Construtor customizado
    Retangulo r4(40);  // Construtor que recebe somente o lado
    Retangulo r5 = 50;  // Construtor que recebe somente o lado

    Retangulo r6 = r2;

    Retangulo *r7 = new Retangulo();
    Retangulo *r8 = new Retangulo(10, 20);

    // Teste com a classe A
    B b1;
    A a1(b1);


    delete r7;
    delete r8;

    return 0;
}
