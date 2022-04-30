#pragma once

#include "TelaProduto.h"
#include "Produto.h"
#include "Lista.h"

class ControleProduto {
public:
    ControleProduto(): _tela(TelaProduto()),
                       _produtos(Lista<Produto>(100)) {
            // vazio
    }

    void executar() {

        while (true) {

            // Exibir o menu principal
            _tela.exibirMenuPrincipal();

            // Usuário escolhe uma opção
            int opcao = _tela.lerOpcao();

            // Tratamento da opção
            switch (opcao) {
                case 1:
                    inserirProduto();
                    break;
                case 2:
                    removerProduto();
                    break;
                case 3:
                    consultarProduto();
                    break;
                case 4:
                    return;
            }
        }
    }

    void inserirProduto() {
        // Le o produto do usuario
        Produto produto = _tela.lerProduto();

        // Salva o produto na lista
        _produtos.insere(produto);
    }

    void removerProduto() {
        try {
            // Le a posicao a ser removida
            int posicao = _tela.lerPosicao();

            // Remove o produto da lista
            _produtos.remove(posicao);
        }
        catch (const char *erro) {
            _tela.exibirMensagemErro(erro);
        }

    }

    void consultarProduto() {
        _tela.imprimirProdutos(_produtos);
    }

private:
    TelaProduto _tela;
    Lista<Produto> _produtos;
};
