#pragma once

// Programação Genérica (Template)
// - Algumas vezes precisamos parametrizar somente o tipo do dado
//   de alguma estrutura
// - Para evitar duplicação de código, utilizamos templates


//class CaixaInt {
//public:
//    CaixaInt(int item) : _item(item) {}
//
//    void setItem(int item) {
//        _item = item;
//    }
//
//    int getItem() const {
//        return _item;
//    }
//
//private:
//    int _item;
//};
//
//class CaixaString {
//public:
//    CaixaString(std::string item) : _item(item) {}
//
//    void setItem(std::string item) {
//        _item = item;
//    }
//
//    std::string getItem() const {
//        return _item;
//    }
//
//private:
//    std::string _item;
//};


// - Usamos a palavra-chave template antes da definição da classe seguida
//   dos tipos parametrizados
// - A classe é gerada para cada tipo em tempo de compilação
// - A definição e implementação precisam estar no .h
//      - implementação inline
template<class T = int>
class Caixa {
public:
    Caixa(T item) : _item(item) {}

    void setItem(T item) {
        _item = item;
    }

    T getItem() const {
        return _item;
    }

private:
    T _item;
};


template<class X>
class Caixinha : Caixa<X> {
public:
    Caixinha(X item) : Caixa<X>(item) {}
};

