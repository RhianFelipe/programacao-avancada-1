#include <iostream>
#include <string>
using namespace std;

#include <set>
#include <map>

int main() {
    // Containeres associativos
    //      - Não existe ordem
    //      - Não tem repetição

    // --------------------------------------
    // SET
    // --------------------------------------
    // Conjunto é uma estrutura de dados onde os valores são
    // armazenados na própria chave
    //      - conjuntos por definição não tem repetição
    //      - conjuntos não tem ordem
    //
    // Servem para verificar se um elemento pertence ou não
    // ao conjunto

    set<int> conj1;

    // Adiciona elementos ao conjunto
    conj1.insert(1);
    conj1.insert(8);
    conj1.insert(9);
    conj1.insert(9);
    conj1.insert(9);
    conj1.insert(9);
    conj1.insert(99);
    conj1.insert(-1);
    conj1.insert(2);

    // Verifica o tamanho do conjunto
    cout << "Tamanho do conjunto = " << conj1.size() << endl;

    // Remove um elemento do conjunto
    conj1.erase(99);

    // Verifica se o elemento existe no conjunto
    if (conj1.find(1) != conj1.end()) {
        cout << "O elemento 1 existe no conjunto!" << endl;
    }

    if (conj1.find(0) != conj1.end()) {
        cout << "O elemento 0 existe no conjunto!" << endl;
    } else {
        cout << "O elemento 0 NÃO existe no conjunto!" << endl;
    }
    cout << endl;

    for (auto it = conj1.begin(); it != conj1.end(); it++) {
        cout << "conj1[" << *it << "]" << endl;
    }

    // --------------------------------------
    // MAP
    // --------------------------------------
    // Mapas ou dicionários implementam vetores associativos
    // Mapeia uma chave -> valor

    map<int, char> mapa1;
    map<string, float> mapa2;

    // Adicionando elementos ao mapa
    mapa1.insert(pair<int, char>(65, 'A'));
    mapa1.insert(pair<int, char>(66, 'B'));
    mapa1[67] = 'C';
    mapa1[-1] = 'X';

    // Imprime os valores das posições
    cout << "Valor 65: " << mapa1[65] << endl;
    cout << "Valor 66: " << mapa1[66] << endl;
    cout << "Valor 67: " << mapa1[67] << endl;
    cout << "Valor 68: " << mapa1[68] << endl;
    cout << "Valor -1: " << mapa1[-1] << endl;
    cout << endl;

    mapa2["abacaxi"] = 12.8;
    mapa2["banana"] = 11.5;
    mapa2["zaca"] = 11.5;
    mapa2["laranja"] = 6.99;
    mapa2["jaca"] = 12.00;

    cout << "Valor jaca: " << mapa2["jaca"] << endl;

    for (auto it = mapa2.begin(); it != mapa2.end(); it++) {
        cout << "mapa2[" << it->first << "] = " << it->second << endl;
    }

    // Se chave não existe, insere a chave -> valor no mapa
    // Se chave já existe, atualiza o valor da chave
    mapa2["jaca"] = 1200.00;
    cout << "Valor jaca: " << mapa2["jaca"] << endl;

//    cout << "Valor cereja: " << mapa2["cereja"] << endl;

    // Verifica se a chave existe
    if (!mapa2.count("cereja")) {
        cout << "Chave não existe!" << endl;
    }



    return 0;
}
