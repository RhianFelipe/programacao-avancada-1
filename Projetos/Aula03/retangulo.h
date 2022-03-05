#ifndef _RETANGULO_H_
#define _RETANGULO_H_

// 1. Inclusão de bibliotecas
// #include <string>

// 2. Definição de constantes e macros
// #define MAX_LARGURA 100

// 3. Definição de apelidos
// typedef int** MedidaLado;

// 4. Definição de tipos: struct / classe
class Retangulo {
public:
    // Construtores
    Retangulo();                // Construtor vazio
//    Retangulo(Retangulo &r);    // Construtor de cópia
    Retangulo(int base, int altura);
    Retangulo(int lado);

    ~Retangulo();               // Destrutor

    // Métodos gerais
    int calcularArea();
    int calcularPerimetro();
    void desenhar();

    // Métodos acessores e mutantes
    int getBase() {
        return _base;
    }

    int getAltura() {
        return _altura;
    }

    void setBase(int base);
    void setAltura(int altura);

private:
    // Atributos
    int _base;
    int _altura;
};

// 5. Funções inline
inline int max(int a, int b) {
    return a > b ? a : b;
}

inline void Retangulo::setBase(int base) {
    _base = base > 0 ? base : 0;
}
inline void Retangulo::setAltura(int altura) {
    _altura= altura > 0 ? altura : 0;
}


#endif
