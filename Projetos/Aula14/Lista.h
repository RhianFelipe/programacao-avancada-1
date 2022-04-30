#pragma once

template <class T>
class Lista {
public:
    Lista(int tamanho) : _dados(nullptr), _tamanho(tamanho), _final(0) {
        _dados = new T[tamanho];
    }

    virtual ~Lista() {
        if (_dados) {
            delete[] _dados;
        }
    }

    void insere(const T &item) {
        if (_final < _tamanho) {
            _dados[_final] = item;
            _final++;
        } else {
            throw "Lista esta cheia";
        }
    }

    T& remove(int pos) {
        if (pos < _final) {
            T item = _dados[pos];
            for (int i = pos; i < _final; i++) {
                _dados[i] = _dados[i + 1];
            }
            _final--;
            return item;
        }
        throw "Posição inválida!";
    }

    T& get(int pos) const {
        return _dados[pos];
    }

    T& operator[](int pos) const {
        return _dados[pos];
    }

    int getTamanho() const {
        return _final;
    }

private:
    T *_dados;
    int _tamanho;
    int _final;
};
