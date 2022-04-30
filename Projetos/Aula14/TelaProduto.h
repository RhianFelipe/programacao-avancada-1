#pragma once

#include <iostream>
#include "Produto.h"
#include "Lista.h"

class TelaProduto {

public:

    void exibirMenuPrincipal() const {
        std::cout << "== Menu principal ==" << std::endl;
        std::cout << std::endl;
        std::cout << "1. Adicionar produto" << std::endl;
        std::cout << "2. Remover produto" << std::endl;
        std::cout << "3. Consultar produtos" << std::endl;
        std::cout << "4. Sair" << std::endl;
    }

    int lerOpcao() const {
        std::cout << ":> ";
        int opcao;
        std::string buffer;
        std::cin >> opcao;
        std::getline(std::cin, buffer);

        return opcao;
    };

    Produto lerProduto() const {
        std::cout << "== Dados do produto ==" << std::endl;

        std::string nome;
        std::cout << "Nome......: ";
        std::getline(std::cin, nome);

        float preco;
        std::cout << "Preço.....: ";
        std::cin >> preco;

        int quantidade;
        std::cout << "Qtde......: ";
        std::cin >> quantidade;

        return Produto(nome, preco, quantidade);
    }

    int lerPosicao() const {
        std::cout << "== Posição a ser removida ==" << std::endl;

        int posicao;
        std::cout << "Posição: ";
        std::cin >> posicao;

        return posicao;
    }

    void imprimirProdutos(const Lista<Produto> &lista) const {
        std::cout << "== Produtos ==" << std::endl;

        for (int i = 0; i < lista.getTamanho(); i++) {
            std::cout << "Nome......: " << lista[i].getNome() << std::endl;
            std::cout << "Preço.....: " << lista[i].getPreco() << std::endl;
            std::cout << "Qtde......: " << lista[i].getQuantidade() << std::endl;
            std::cout << std::endl;
        }

    }

    void exibirMensagemErro(const char *erro) {
        std::cerr << erro << std::endl;
    }
};
