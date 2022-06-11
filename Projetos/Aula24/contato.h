#pragma once

#include <iostream>
#include <string>

using namespace std;

class Contato {
public:
    Contato() : _nome(""),
                _endereco(""),
                _telefone(""),
                _email(""),
                _idade(0) {
        // vazio
    }

    const string &get_nome() const {
        return _nome;
    }

    void setNome(const string &nome) {
        _nome = nome;
    }

    const string &getEndereco() const {
        return _endereco;
    }

    void setEndereco(const string &endereco) {
        _endereco = endereco;
    }

    const string &getTelefone() const {
        return _telefone;
    }

    void setTelefone(const string &telefone) {
        _telefone = telefone;
    }

    const string &getEmail() const {
        return _email;
    }

    void setEmail(const string &email) {
        _email = email;
    }

    int getIdade() const {
        return _idade;
    }

    void setIdade(int idade) {
        _idade = idade;
    }

    string getNome() const {
        return _nome;
    }


private:
    string _nome;
    string _endereco;
    string _telefone;
    string _email;
    int _idade;
};

// Padrão de projetos Builder

class ContatoBuilder {
public:
    ContatoBuilder(): _contato(Contato()) {}

    ContatoBuilder &addNome(string nome) {
        _contato.setNome(nome);
        return *this;
    }

    ContatoBuilder &addEndereco(string endereco) {
        _contato.setEndereco(endereco);
        return *this;
    }

    ContatoBuilder &addTelefone(string telefone) {
        _contato.setTelefone(telefone);
        return *this;
    }

    ContatoBuilder &addEmail(string email) {
        _contato.setEmail(email);
        return *this;
    }

    ContatoBuilder &addIdade(int idade) {
        _contato.setIdade(idade);
        return *this;
    }

    Contato build() {
        return _contato;
    }

private:
    Contato _contato;
};

// Padrão de projetos Singleton

class ContatoSingleton {
public:
    ~ContatoSingleton() {
        if (_contato) {
            delete _contato;
        }
    }

    static Contato *getInstance() {
        if (!_contato) {
            _contato = new Contato();
        }
        return _contato;
    }

private:
    static Contato *_contato;
    ContatoSingleton() {}
};

Contato* ContatoSingleton::_contato = nullptr;

// Lazy loading
// - Atrasa a instanciação de variáveis para o momento que
// elas forem ser utilizadas
// - Usado para objetos que consomem muita memória e/ou CPU


