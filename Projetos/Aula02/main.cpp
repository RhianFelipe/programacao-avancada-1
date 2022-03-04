#include <iostream>
#include <iomanip>
using namespace std;

#include "data.h"

// Declaração de variável no escopo global
int x = 0;  // variável global !!! (devem ser evitadas)

void inc(int i) {
    ::x += i;
}

// Namespaces: escopo de nomes (variáveis, tipos de dados, etc)
// - Serve para organização do código de maneira modular
// - Evitar conflitos de nomes
namespace Numero {
    int x;
    void inc(int i) {
        cout << "incrementado " << x << " em " << i << endl;
        x += i;
    }
}

// TAD: Tipo Abstrato de Dados
// - modelo matemático dos dados que ele representa
// - conjunto de operações sobre o modelo


int main() {
    int x = 20;
    inc(100);
    cout << x << endl;
    cout << ::x << endl;

    Numero::x = 500;
    Numero::inc(500);
    cout << Numero::x << endl;

    float dinheiros = 34.5; // R$ 34,50
    cout << dinheiros << endl;

    // setw(): número mínimo de caracteres para próxima saída
    cout << setw(20) << "R$ " << dinheiros << endl;

    // setfill(): preenche os caracteres vazios do setw
    cout << setfill('.') << setw(20) << "R$ " << dinheiros << endl;

    // right: alinha a direita
    // left: alinha a esquerda
    cout << "|" << left << setw(10) << "banana"  << "|" << "R$ " << left << setw(20)  << dinheiros << "|" << endl;
    cout << "|" << left << setw(10) << "laranja" << "|" << "R$ "<< right << setw(20)  << dinheiros << "|" << endl;

    // setprecision(): dígitos significativos
    cout << setprecision(3) << 13.141516 << endl;

    cout.precision(3);
    cout << fixed << 13.14151617 << endl;
    cout << scientific << 13.14151617 << endl;

    Data data = dataIniciar(10, 10, 2010);
    dataImprimir(data);
    
    return 0;
}
