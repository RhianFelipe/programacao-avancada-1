#pragma once

#include <list>
#include "contato.h"

class TelaAgenda {
public:
    int exibirMenu() const;

    Contato inserirContato() const;

    std::string excluirContato() const;

    void listarContatos(std::list<Contato> &contatos);
};
