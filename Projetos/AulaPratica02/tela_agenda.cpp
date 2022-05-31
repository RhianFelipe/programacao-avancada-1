#include "tela_agenda.h"

#include <iostream>
#include <iomanip>
#include <algorithm>


using namespace std;

int TelaAgenda::exibirMenu() const {
    cout << "=== AGENDA 1.0 ===" << endl << endl;
    cout << "1) Cadastrar contato" << endl;
    cout << "2) Excluir contato" << endl;
    cout << "3) Lista contatos" << endl;
    cout << "4) Sair" << endl;

    int opcao;
    cout << ">: ";
    cin >> opcao;

    char buffer[256];
    cin.getline(buffer, 256);

    return opcao;
}

Contato TelaAgenda::inserirContato() const {
    Contato contato;
    char buffer[1024];

    cout << "== Cadastrar contato==" << endl << endl;
    cout << "Nome......: ";
    cin.getline(buffer, 1024);
    contato.setNome(buffer);

    cout << "E-mail....: ";
    cin.getline(buffer, 1024);
    contato.setEmail(buffer);

    cout << "Telefone..: ";
    cin.getline(buffer, 1024);
    contato.setTelefone(buffer);

    cout << "Cidade..: ";
    cin.getline(buffer, 1024);
    contato.setCidade(buffer);

    return contato;
}

std::string TelaAgenda::excluirContato() const {
    char buffer[1024];

    cout << "== Excluir contato==" << endl << endl;
    cout << "Nome......: ";
    cin.getline(buffer, 1024);

    return std::string(buffer);
}

void TelaAgenda::listarContatos(std::list<Contato> &contatos) {

    cout << "== Listar contatos==" << endl << endl;
    cout << "a) Nome asc" << endl;
    cout << "b) Nome desc" << endl;
    cout << "c) Email asc" << endl;
    cout << "d) Email desc" << endl;
    cout << "e) Cidade asc" << endl;
    cout << "f) Cidade desc" << endl;

    char opcao;
    cout << ">: ";
    cin >> opcao;

    std::list<int> aaa;
    aaa.sort([](int i, int j) {return i < j;});

    std::list<Contato> bbb;
    bbb.sort([](Contato i, Contato j) {return i.getNome() < j.getNome();});


    contatos.sort([](const Contato &c1, const Contato &c2) {
        return c1.getNome() < c2.getNome();
    });



    switch (opcao) {
//        case 'a':
//            sort(contatos.begin(), contatos.end(), [](const Contato &c1, const Contato &c2) {
//               return c1.getNome() < c2.getNome();
//            });
//            break;
//        case 'b':
//            sort(contatos.begin(), contatos.end(), [](const Contato &c1, const Contato &c2) {
//                return c1.getNome() > c2.getNome();
//            });
//            break;
//        case 'c':
//            sort(contatos.begin(), contatos.end(), [](const Contato &c1, const Contato &c2) {
//                return c1.getEmail() < c2.getEmail();
//            });
//            break;
//        case 'd':
//            sort(contatos.begin(), contatos.end(), [](const Contato &c1, const Contato &c2) {
//                return c1.getEmail() > c2.getEmail();
//            });
//            break;
//        case 'e':
//            sort(contatos.begin(), contatos.end(), [](const Contato &c1, const Contato &c2) {
//                return c1.getCidade() < c2.getCidade();
//            });
//            break;
//        case 'f':
//            sort(contatos.begin(), contatos.end(), [](const Contato &c1, const Contato &c2) {
//                return c1.getCidade() > c2.getCidade();
//            });
//            break;
//        default:
//            cerr << "Opção inválida! " << endl;
//            return;
    }

    for (Contato contato : contatos) {
        cout << "| " << setw(20) << left << contato.getNome();
        cout << "| " << setw(20) << left << contato.getEmail();
        cout << "| " << setw(20) << left << contato.getTelefone();
        cout << "| " << setw(20) << left << contato.getCidade();
        cout << " |" << endl;
    }

}
