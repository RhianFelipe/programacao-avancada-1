#pragma once

#include <string>

class Contato {
public:
    Contato(const std::string &_nome = "", const std::string &_email = "", const std::string &_telefone = "",
            const std::string &_cidade = "") : _nome(_nome),
                                          _email(_email),
                                          _telefone(_telefone),
                                          _cidade(_cidade) {}

    const std::string &getNome() const {
        return _nome;
    }

    void setNome(const std::string &_nome) {
        Contato::_nome = _nome;
    }

    const std::string &getEmail() const {
        return _email;
    }

    void setEmail(const std::string &_email) {
        Contato::_email = _email;
    }

    const std::string &getTelefone() const {
        return _telefone;
    }

    void setTelefone(const std::string &_telefone) {
        Contato::_telefone = _telefone;
    }

    const std::string &getCidade() const {
        return _cidade;
    }

    void setCidade(const std::string &_cidade) {
        Contato::_cidade = _cidade;
    }

public:

private:
    std::string _nome;
    std::string _email;
    std::string _telefone;
    std::string _cidade;
};
