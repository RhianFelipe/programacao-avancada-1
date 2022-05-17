#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

class Aluno {
public:
    Aluno(string nome, float nota1, float nota2): _nome(nome),
                                                  _nota1(nota1),
                                                  _nota2(nota2) {
        // vazio
    }

    float media() const {
        return (_nota1 + _nota2) / 2;
    }

    friend ostream& operator<<(ostream &out, Aluno &aluno)  {
        out << setw(12) << aluno._nome << " - "
//            << aluno._nota1 << " " << aluno._nota2 << " "
            << aluno.media();
        return out;
    }

    bool operator<(const Aluno &outro) const {
        return _nome < outro._nome;
    }

private:
    string _nome;
    float _nota1;
    float _nota2;
};


// ----------------------
// Ponteiro para função
//  - Atribui o endereço de uma função a uma variável qualquer
//  - Permite a passagem de funções por paramento

int soma(int a, int b) {
    return a + b;
}

int mult(int a, int b) {
    return a * b;
}

// ----------------------
// Functors
//  - Sao objetos que se comportam com funções
//  - Sao obtidos atraves da sobrecarga do operador ()

class ComparaAluno {
public:
    bool operator()(const Aluno &a1, const Aluno &a2) const {
        return a1.media() < a2.media();
    }
};


int main() {

    // Exemplo de ponteiro para funções
    int (*ptr)(int, int);

    ptr = &soma;
    cout << ptr(10, 200) << endl;

    ptr = &mult;
    cout << ptr(10, 200) << endl;

    //
    vector<int> vet1;
    vet1.push_back(99);
    vet1.push_back(12);
    vet1.push_back(43);
    vet1.push_back(1);
    vet1.push_back(55);

    cout << "vet1: ";
    for (int i = 0; i < vet1.size(); i++) {
        cout << vet1[i] << ", ";
    }
    cout << endl;

    sort(vet1.begin(), vet1.end());

    cout << "vet1: ";
    for (int i = 0; i < vet1.size(); i++) {
        cout << vet1[i] << ", ";
    }
    cout << endl;

    // Criando um vetor de alunos
    vector<Aluno> vet2;
    vet2.push_back(Aluno("Joao", 8.9, 8));
    vet2.push_back(Aluno("Pedro", 6.7, 5.2));
    vet2.push_back(Aluno("Jose", 4.5, 2.0));
    vet2.push_back(Aluno("Marcia", 9.5, 7.0));
    vet2.push_back(Aluno("Raquel", 6.4, 9.0));
    vet2.push_back(Aluno("Ana", 3.1, 9.9));

    cout << "Alunos: " << endl;
    for (int i = 0; i < vet2.size(); i++) {
        cout << vet2[i] << "\n";
    }
    cout << endl;

    // Ordenando pelo operador <
    sort(vet2.begin(), vet2.end());

    cout << "Alunos ordenados: " << endl;
    for (int i = 0; i < vet2.size(); i++) {
        cout << vet2[i] << "\n";
    }
    cout << endl;

    // Ordenando pelo functor
    ComparaAluno compara;
    sort(vet2.begin(), vet2.end(), compara);

    cout << "Alunos ordenados: " << endl;
    for (int i = 0; i < vet2.size(); i++) {
        cout << vet2[i] << "\n";
    }
    cout << endl;

    // funções lambda
    //  - Conceito herdado do paradigma de programacao funcionalista
    //  - Permite a criacao de funções locais, sem nome, para serem
    //    usadas somente uma vez
    //
    // SINTAXE:
    //      [captura](parametros) -> tipo_retorno {
    //          Corpo da função
    //      }
    //
    //      - captura: especifica variaveis do escopo externo para a função lambda
    //      - parametros: lista de parametros da função
    //      - tipo_retorno: o que a função lambda retorna

    auto lambda = [](Aluno &a, Aluno &b) -> bool {
        return a.media() < b.media();
    };

    sort(vet2.begin(), vet2.end(), lambda);

    cout << "Alunos ordenados (lambda): " << endl;
    for (int i = 0; i < vet2.size(); i++) {
        cout << vet2[i] << "\n";
    }
    cout << endl;

    cout << "Utilizando for_each: " << endl;
    for_each(vet2.begin(), vet2.end(), [](Aluno &aluno) {
       cout << aluno << endl;
    });

    for_each(vet1.begin(), vet1.end(), [](int &item) {item *= item;});
    for_each(vet1.begin(), vet1.end(), [](int &item) {cout << item << ", ";});

    for_each(vet1.begin(), vet1.end(), [](int &item) {item *= 2;});
    for_each(vet1.begin(), vet1.end(), [](int &item) {cout << item << ", ";});
    
    return 0;
}
