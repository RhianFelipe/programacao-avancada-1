#include <iostream>
#include "matriz.h"
#include "ponto.h"

using namespace std;

// Sobrecarga de operadores
//
// - Redefinição dos operadores padrão da linguagem
// - Serve para facilitar a leitura do código
//   - Diminui as chances de escrever alguma expressão errada
//   - Aumenta a velocidade de desenvolvimento

// Podemos sobrescrever os operadores nativos do C++
//  - Não podemos criar operadores novos: @x
// Os operadores respeitam a ordem de precedência da linguagem
// O significado novo do operador tem que fazer sentido no contexto

// MATLAB - $$$
// m(3,3)
// m1 + m2

// Atividade:
//
//  Crie uma classe Pilha com as seguintes operações:
//
//      .empilha(int)
//      +=: adiciona um elemento ao topo da pilha
//
//      .desempilha()
//      --: remove o topo da pilha e retorna ele
//
//      .topo()
//      (): acessa o topo da pilha
//
//      ==, !=: compara se as pilhas são iguais ou diferentes
//      >, <, >=, <=: compara os tamanhos de duas pilhas

// p.empilha(1)
// p.empilha(2)
// p.empilha(3)
// p.empilha(4)
// cout << p.topo() << endl;
// int x = p.desempilha();

// p += 1
// p += 2
// p += 3
// p += 4
// cout << p() << endl;
// int x = p--;




int main() {
    // resultado = m1 + m2 - (m3 + 3 * m4) * m5

//    Matriz m1(2,2);
//    Matriz m2(2,2);
//    Matriz m3(2,2);
//    Matriz m4(2,2);
//    Matriz m5(2,2);
//
//    Matriz r1 = m1.soma(m2);        // m1 + m2
//    Matriz r2 = m4.mult(3);     // m4 * 3
//    Matriz r3 = m3.soma(r2);        // m3 + m4 * 3
//    Matriz r4 = r3.mult(m5);        // (m3 + 3 * m4) * m5
//    Matriz resultado1 = r1.subt(r4); // m1 + m2 - (m3 + 3 * m4) * m5
//
//    Matriz resultado2 = m1 + m2 - (m3 + m4 * 3) * m5;

    //Matriz r5 = m1.soma(m2).subt((m3.soma(m4.mult(3))).mult(m5))


    cout << "Exemplo ponto" << endl;
    Ponto p1(2, 2);
    Ponto p2(3, 4);

    Ponto x1 = p1 + p2;
    Ponto x2 = p1.operator+(p2);

    if (p1 == p2) {
        cout << "Sao iguais" << endl;
    } else {
        cout << "Sao diferentes" << endl;
    }

    // p1 + p2 = (2, 2) + (3, 4) = (5, 6)


    return 0;
}
