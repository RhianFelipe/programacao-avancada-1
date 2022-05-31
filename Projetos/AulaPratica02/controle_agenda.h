#pragma once

#include <list>

#include "tela_agenda.h"
#include "contato.h"

class ControleAgenda {
public:
    ControleAgenda() : _tela(TelaAgenda()),
                       _contatos(std::list<Contato>()) {}

    void executar();

private:
    TelaAgenda _tela;
    std::list<Contato> _contatos;

    void _inserirContato();

    void _excluirContato();

    void _listarContatos();
};
