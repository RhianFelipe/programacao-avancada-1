#include "data_dao.h"

#include <fstream>
using namespace std;

// Convenção de caminho de arquivo
//  - Caminho absoluto: a partir da raiz do disco
//          /home/usuario/dados/arquivo.txt
//          C:\\Usuario\\Meus Documentos\\arquivo.txt
//
//  - Caminho relativo: a partir do local de execução do programa
//          pasta/arquivo.txt
//          pasta\\arquivo.txt

#define ARQUIVO "dados.csv"

// Formato de arquivo .csv (comma separated values)
// - dados tabulados
// - compativel com excel

void DataDAO::inserir(const Data &data){
    // 1. Abre o arquivo
    // ofstream fout(ARQUIVO); // Escrita destrutiva do arquivo
    ofstream fout(ARQUIVO, ios::app); // Escreve no final do arquivo

    // 2. Escreve os dados no arquivo
    fout << data << endl;

    // 3. Fecha o arquivo
    fout.close();
}

std::list<Data> DataDAO::consultar() {
    // 1. Abre o arquivo
    ifstream fin(ARQUIVO);

    // 2. Le os dados do arquivo
    Data data(0, 0, 0);
    list<Data> datas;

    while (!fin.eof()) {
        fin >> data;
        if (fin.eof()) break; // Evita de inserir o ultimo objeto duas vezes

        datas.push_back(data);
    }

    // 3. Fecha o arquivo
    fin.close();

    // Retorna os dados lidos
    return datas;
}


