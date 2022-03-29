#include <iostream>
using namespace std;

#include "homem_aranha.h"

void trabalhar(Homem &homem) {
    homem.falar();
    homem.falar();
    homem.falar();
}

class A {
public:
    A() {
        cout << "A()" << endl;
    }
    virtual ~A() {
        cout << "~A()" << endl;
    }

};


class B : public A {
public:
    B(): A(), _vetor(nullptr) {
        cout << "B()" << endl;
        cout << "Alocando bastante memoria!" << endl;
        _vetor = new int[100000];
    }
    virtual ~B() {
        cout << "~B()" << endl;
        cout << "Desalocando toda a memoria!" << endl;
        delete[] _vetor;
    }

private:
    int *_vetor;
};

class C {
public:
    virtual ~C() {}
};



int main() {
    HomemAranha peter = HomemAranha("Peter Parker");
    peter.andar();
    peter.correr();
    peter.soltarTeias();
    peter.escalarParedes();

    // Polimorfismo: um objeto assume diferentes formas
    // Assume a forma do tipo do ponteiro
    cout << "ptr Homem" << endl;
    Homem *pt1 = &peter;
    pt1->falar();
    pt1->correr();
    pt1->andar();
    // pt1->soltarTeias(); // ERRO: soltarTeias nao existe na classe Homem

    cout << "ptr Aranha" << endl;
    Aranha *pt2 = &peter;
    pt2->escalarParedes();
    pt2->soltarTeias(); // Como método é virtual, vale a implememtação da classe filha

    cout << "teste" << endl;
    trabalhar(peter);

    Homem joao("Joao");
    trabalhar(joao);

    Aranha sandra("Sandra");
    //trabalhar(sandra);
    //Homem *ptr3 = (Homem *) &sandra;
    //trabalhar(ptr3);

    cout << "Teste alocacao dinamica I" << endl;
    {
        B b1;
    }

    cout << "Teste alocacao dinamica II" << endl;
    {
        A *ptr4 = new B();
        delete ptr4;
    }

    // Atividade:
    //  - Criar uma classe Produto(id, nome, preco)
    //      - imprime()           - metodo abstrato
    //      - calcularDesconto()  - 10%
    //  - Criar uma classe Camiseta: Produto
    //  - Criar uma classe Bermuda: Produto
    //  - Criar uma classe Playstation: Produto
    //      - calcularDesconto()  - 20%



    return 0;

}
