#pragma once

#include <exception>

class ListaTamanhoInvalidoException : public std::exception {
    const char *what() {
        return "Tamanho da lista deve ser > 0";
    }
};

class ListaCheiaException : public std::exception {
    const char *what() {
        return "Número máximo de elementos atingido";
    }
};

class ListaIndiceInvalidoException : public std::exception {
    const char *what() {
        return "Posição inválida da lista";
    }
};
