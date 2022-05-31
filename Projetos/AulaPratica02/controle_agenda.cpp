#include "controle_agenda.h"

void ControleAgenda::executar() {
    bool terminou = false;

    do {
        // Exibe o menu principal na tela
        int opcao = _tela.exibirMenu();

        // Trata cada uma das opcoes
        switch (opcao) {
            case 1:
                _inserirContato();
                break;
            case 2:
                _excluirContato();
                break;
            case 3:
                _listarContatos();
                break;
            case 4:
                terminou = true;
        }

    } while (!terminou);

}


void ControleAgenda::_inserirContato() {
    Contato contato = _tela.inserirContato();
    _contatos.push_back(contato);
}

void ControleAgenda::_excluirContato() {
    std::string nome = _tela.excluirContato();
    _contatos.remove_if([nome](const Contato &contato) -> bool {
        return contato.getNome() == nome;
    });
}
void ControleAgenda::_listarContatos() {
    _tela.listarContatos(_contatos);
}
