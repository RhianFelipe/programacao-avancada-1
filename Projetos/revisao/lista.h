#pragma once

#include "excecoes.h"

template<typename T>
class Lista {
public:
    Lista(int tamanhoMaximo) : _vetor(nullptr), _tamanho(0), _tamanhoMaximo(tamanhoMaximo) {
        if (tamanhoMaximo <= 0) {
            throw ListaTamanhoInvalidoException();
        }
        _vetor = new T[tamanhoMaximo];
    }

    virtual ~Lista() {
        if (_vetor) {
            delete[] _vetor;
            _vetor = nullptr;
        }
    }

    void insere(T &item) {
        if (_tamanho >= _tamanhoMaximo) {
            throw ListaCheiaException();
        }
        _vetor[_tamanho++] = item;
    }

    T remove(int posicao) {
        if (posicao < 0 or posicao >= _tamanho) {
            throw ListaIndiceInvalidoException();
        }

        T item = _vetor[posicao];

        for (int i = posicao; i <= _tamanho; i++) {
            _vetor[i] = _vetor[i + 1];
        }
        _tamanho--;

        return item;
    }

    int getTamanho() const {
        return _tamanho;
    }

    T &operator[](int posicao) const {
        if (posicao < 0 or posicao >= _tamanho) {
            throw ListaIndiceInvalidoException();
        }

        return _vetor[posicao];
    }

private:
    T *_vetor;
    int _tamanho;
    int _tamanhoMaximo;
};
