#include <iostream>
#include <string>

#include <cmath>

using namespace std;

#include "lista.h"
#include "pessoa.h"

// Biblioteca de templates: STL
#include <vector>   // vetor
#include <list>     // lista
#include <deque>    // lista duplamente encadeada

#include <set>      // conjunto
#include <map>      // mapa / dicionário

#include <algorithm>

#define MAX_TAM 100

int main() {
    Lista<int> lista(MAX_TAM);

    set<int> conjunto;
    conjunto.insert(5);
    conjunto.insert(5);
    conjunto.insert(6);
    conjunto.insert(6);

    cout << "Número de elementos: " << conjunto.size() << endl;
    for (int i : conjunto) {
        cout << i << endl;
    }

    if (conjunto.find(5) != conjunto.end()) {
        cout << "Encontrou o 5!!" << endl;
    }


    map<string, int> cor;
    cor["vermelho"] = 0xAA0000;
    cor["verde"] = 0x00AA00;

    cout << "Cor verde: " << cor["verde"] << endl;

    deque<int> numeros;
    for (int i = 0; i < 10; i++) {
        numeros.push_back(random() % 100);
    }

    cout << "Números: ";
    for (auto it = numeros.begin(); it != numeros.end(); it++) {
        cout << *it << ", ";
    }
    cout << endl;

    sort(numeros.begin(), numeros.end());

    cout << "Números: ";
    for (int i : numeros) {
        cout << i << ", ";
    }
    cout << endl;

    reverse(numeros.begin(), numeros.end());

    cout << "Números: ";
    for (int i : numeros) {
        cout << i << ", ";
    }
    cout << endl;

    random_shuffle(numeros.begin(), numeros.end());

    cout << "Números: ";
    for (int i : numeros) {
        cout << i << ", ";
    }
    cout << endl;

    sort(numeros.begin(), numeros.end(), [](int &a, int &b) -> bool {
        return a > b;
    });

    cout << "Números: ";
    for (int i : numeros) {
        cout << i << ", ";
    }
    cout << endl;


    ComparaPessoasPorIdade functor;
    functor(Pessoa("AAA", 123), Pessoa("BBB", 234));

    return 0;
}
