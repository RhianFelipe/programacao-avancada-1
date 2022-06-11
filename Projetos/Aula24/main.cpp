#include <iostream>
#include <string>

#include "contato.h"

using namespace std;

// Objetos imutáveis
// - São objetos que não alteram o seu estado ao longo do programa
// - Sistemas multi-thread tem vantagem com estes tipos de objetos
// - Herdado do paradigma funcionalista


// Na criação da classe, não são permitidos métodos mutantes,
// apenas métodos constantes

class Produto {
public:
    Produto(string nome, string descricao, float valor, int quantidade) : _nome(nome),
                                                                          _descricao(descricao),
                                                                          _valor(int(valor * 100)),
                                                                          _quantidade(quantidade) {
        // vazio
    }

    string getNome() const {
        return _nome;
    }

    string getDescricao() const {
        return _descricao;
    }

    float getValor() const {
        return _valor / 100.0f;
    }

    int getQuantidade() const {
        return _quantidade;
    }

    float getTotal() const {
        return getValor() * _quantidade;
    }

    void imprime() const {
        cout << _nome << " - " << getTotal() << endl;
    }

private:
    string _nome;
    string _descricao;
    int _valor;
    int _quantidade;
};


int main() {
    Produto p1 = Produto("PS4", "video game", 3000, 1);
    Produto p2 = Produto("PS5", "video game", 6000, 4);
    Produto p3 = Produto("PS6", p1.getDescricao(), p1.getValor(), p1.getQuantidade());

    p1.imprime();
    p2.imprime();
    p3.imprime();

    // AlertDialog.Builder().addTitle(..).addMessage(..).build()
    Contato c1 = ContatoBuilder()
                    .addNome(string("Homer Simpson"))
                    .addEmail(string("homer@email.com"))
                    .addIdade(40)
                    .addTelefone(string("1234"))
                    .build();

    Contato c2;
    c2.setNome(string("Homer Simpson"));
    c2.setEmail(string("homer@email.com"));
    c2.setIdade(40);
    c2.setTelefone(string("1234"));


    Contato *c3 = ContatoSingleton::getInstance();

    return 0;
}
