#include <iostream>
#include <exception>
#include <sstream>
#include <istream>
#include <fstream>

using namespace std;

#define ERRO_DIVISAO_POR_ZERO   -999
#define ERRO_DIVISAO_NEGATIVA   -888

// Tratamento de exceções
// - Uma exceção é um evento que foge a regra geral da aplicação
// - Normalmente, a tratativa desse evento deve ser feita fora da
//   lógica principal da aplicação

// 1. Lançamento da exceção:
//      throw <alguma_coisa>;
//
//      Tipos permitidos de exceção:
//          - int
//          - char
//          - const char *
//          - enum
//          - objeto (std::exception)
//
// 2. Captura das exceções
//       try {
//         ... // lógica principal do código
//       }
//       catch (...) {
//         ... // tratamento do erro
//       }
//
// !!! Se o erro não for capturado, o programa termina.

// Declaração de classes de exceção
// - O nome da classe define o tipo do erro

class DivisaoPorZeroException : public std::exception {
public:
    const char *what() {
        return "Não existe divisão por zero!";
    }
};

class NumeroNegativoException : public std::exception {
public:
    explicit NumeroNegativoException(float valor) : _valor(valor) {
    }

    const char *what() {
        stringstream ss;
        ss << "O valor " << _valor << " é negativo!";
        return ss.str().c_str();
    }

private:
    float _valor;
};


int divide(int a, int b) {
    if (b == 0) {
        throw ERRO_DIVISAO_POR_ZERO;
    } else if (b < 0) {
        throw ERRO_DIVISAO_NEGATIVA;
    } else if (a == 0) {
        throw "Numerador nulo!";
    }

    return a / b;
}

float divide(float a, float b) {
    if (b == 0) {
        throw DivisaoPorZeroException();
    } else if (b < 0) {
        throw NumeroNegativoException(b);
    }

    return a / b;
}

struct ErroAoAbrirArquivoException : public exception {

};

// O que não fazer:
class EhParException : public exception {};
class EhImparException : public exception {};

void validaNumero(int numero) {
    if (numero % 2 == 0) {
        throw EhParException();
    }
    else {
        throw EhImparException();
    }
}



void salvarDados(string &texto) {
    ofstream out("dados.txt", ios::app);
    if (!out.is_open()) {
        throw ErroAoAbrirArquivoException();
    }
    out << texto << endl;
    out.close();
}


int main() {

    try {
        cout << divide(10.0f, 2.0f) << endl;
        cout << divide(10.0f, -2.0f) << endl;
    }
    catch (DivisaoPorZeroException &ex) {
        cerr << ex.what() << endl;
    }
    catch (NumeroNegativoException &ex) {
        cerr << ex.what() << endl;
    }

    try {
        cout << divide(0, 10) << endl;
        cout << divide(10, 0) << endl;
        cout << divide(10, -10) << endl;
    }
    catch (int ex) {
        if (ex == ERRO_DIVISAO_POR_ZERO) {
            cerr << "Divisao por zero!" << endl;
        } else if (ex == ERRO_DIVISAO_NEGATIVA) {
            cerr << "Divisao por numero negativo!" << endl;
        }
    }
    catch (const char *msg) {
        cerr << msg << endl;
    }

    try {
        string texto("teste de arquivo");
        salvarDados(texto);
    }
    catch (ErroAoAbrirArquivoException &err) {
        cout << "Erro ao abrir o arquivo" << endl;
    }
    catch (ofstream::failure &err) {
        cout << err.what() << endl;
    }

    bool status = true;
    do {
        try {

            status = true;
        }
        catch (...) {
            // erro
            status = false;
        }

    } while(!status);
    
    try {
        validaNumero(78);
    }
    catch (EhParException &ex) {
        // ... Logica
    }
    catch (EhImparException &ex) {
        // ... Logica
    }



    cout << "FIM" << endl;
    return 0;
}
