#include <iostream>
#include <string>

// STL: Standard Template Library
//  - Conjunto de estruturas de dados e algoritmos
//  - Tudo está definido no namespace std

#include <vector>
#include <deque>
#include <list>

#include <algorithm>

using namespace std;

int main() {
    // ----------------------------------
    // CLASSE vector
    // ----------------------------------
    // Representa um vetor
    //      - acesso aleatório aos dados
    //      - permite a inclusão de elementos no final

    vector<int> vet1;           // Cria um vetor vazio
    vector<int> vet2(10);       // Cria um vetor de tamanho 10
    vector<int> vet3(5, 3);     // Cria um vetor de tamanho 5 inicializado com 3
    vector<int> vet4(vet3);     // Cria um vetor usando outro como base

    // Acessar o tamanho do vetor
    cout << "Tamanho vet1 = " << vet1.size() << endl;
    cout << "Tamanho vet2 = " << vet2.size() << endl;
    cout << "Tamanho vet3 = " << vet3.size() << endl;
    cout << endl;

    // Acesso aos elementos do vetor
    for (int i = 0; i < vet2.size(); i++) {
        vet2[i] = i * i;
    }

    for (int i = 0; i < vet2.size(); i++) {
        cout << "vet2[" << i << "] = " << vet2[i] << endl;
    }
    cout << endl;

    for (int i = 0; i < vet3.size(); i++) {
        cout << "vet3[" << i << "] = " << vet3[i] << endl;
    }
    cout << endl;

    // Adicionando elementos ao final do vetor
    vet1.push_back(1000);
    vet1.push_back(2000);
    vet1.push_back(3000);

    for (int i = 0; i < vet1.size(); i++) {
        cout << "vet1[" << i << "] = " << vet1[i] << endl;
    }
    cout << endl;

    // Removendo o último elemento
    vet1.pop_back();

    // Iteradores (padrão de projetos Iterator)
    // - Objeto que tem uma estrutura para percorrer uma coleção
    vector<int>::iterator it;
    vector<int>::reverse_iterator rit;

    for (it = vet2.begin(); it != vet2.end(); it++) {
        cout << "vet2[i] = " << *it << endl;
    }
    cout << endl;

    for (rit = vet2.rbegin(); rit != vet2.rend(); rit++) {
        cout << "vet2[i] = " << *rit << endl;
    }
    cout << endl;

    // Outra estrutura para o foreach (para cada)
    // !!! C++ 14
    for (int x : vet2) {
        cout << "vet2[i] = " << x << endl;
    }


    // ----------------------------------
    // CLASSE deque
    // ----------------------------------
    // Representa uma fila duplamente encadeada
    //      - acesso aleatório aos dados
    //      - permite a inclusão de elementos no início e no final

    deque<string> deq1;             // Cria um deque vazio
    deque<string> deq2(3);          // Cria um deque de tamanho 10
    deque<string> deq3(3, "nada");  // Cria um deque inicializado com nada

    // Acessar o tamanho do deque
    cout << "Tamanho deq1 = " << deq1.size() << endl;
    cout << "Tamanho deq2 = " << deq2.size() << endl;
    cout << "Tamanho deq3 = " << deq3.size() << endl;

    // Para acessar os elementos do deque
    deq2[0] = "banana";
    deq2[1] = "abacaxi";
    deq2[2] = "melão";

    for (int i = 0; i < deq2.size(); i++) {
        cout << "deq2[" << i << "] = " << deq2[i] << endl;
    }
    cout << endl;

    // Insere elementos no começo ou no final do deque
    deq2.push_back("morango");
    deq2.push_back("laranja");
    deq2.push_back("limão");

    deq2.push_front("maçã");
    deq2.push_front("limão");
    deq2.push_front("limão");

    // Percorrendo o deque usando iterador
    for (auto it2 = deq2.begin(); it2 != deq2.end(); it2++) {
        cout << *it2 << endl;
    }
    cout << endl;

    for (const string &x : deq3) {
        cout << x << endl;
    }
    cout << endl;

    // Algoritmos da STL
    // - Ordenação
    cout << "Ordenando o deque: " << endl;
    sort(deq2.begin(), deq2.end());

    for (string &x : deq2) {
        cout << x << endl;
    }
    cout << endl;

    // - Embaralhar o deque
    cout << "Embaralhando o deque: " << endl;
    random_shuffle(deq2.begin(), deq2.end());

    for (string &x : deq2) {
        cout << x << endl;
    }
    cout << endl;

    // Conta o número de elementos repetidos
    cout << "Número de bananas: " << count(deq2.begin(), deq2.end(), "banana") << endl;
    cout << "Número de limões.: " << count(deq2.begin(), deq2.end(), "limão") << endl;

    // Elimina elementos repetidos e consecutivos
    sort(deq2.begin(), deq2.end());
    unique(deq2.begin(), deq2.end());

    for (string &x : deq2) {
        cout << x << endl;
    }
    cout << endl;

    // Outros algoritmos do STL em:c http://www.cplusplus.com/reference/algorithm/

    // ----------------------------------
    // CLASSE list
    // ----------------------------------
    // Representa uma lista
    //      - não permite acesso aleatório aos dados
    //      - permite incluir elementos em qualquer posição

    list<int> l1;           // Cria uma lista vazia
    list<int> l2(5, 0);     // Cria uma lista com inicialização
    list<int> l3(vet2.begin(), vet2.end());   // Cria uma lista com inicialização

    // l2[1] = 0;   // ERRO!

    l3.insert(l3.begin(), 200);
    l3.insert(l3.begin(), 999);
    l3.insert(l3.end(), -999);

    auto itl = l3.begin();
    itl++;
    itl++;
    itl++;

    l3.insert(itl, 777);

    l3.sort();

    for (auto it3 = l3.begin(); it3 != l3.end(); it3++) {
        cout << "l3[i] = " << *it3 << endl;
    }
    cout << endl;




    return 0;
}
