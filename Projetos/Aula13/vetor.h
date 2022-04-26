#pragma once

// STL: Standard Template Library

template<class T = int, int MAX = 100>
class Vetor {
public:
    Vetor(int tamanho = MAX) {
        _dados = new T[tamanho];
    }

    virtual ~Vetor() {
        delete[] _dados;
    }

    T &operator[](int i) {
        return _dados[i];
    }

private:
    T *_dados;
};
