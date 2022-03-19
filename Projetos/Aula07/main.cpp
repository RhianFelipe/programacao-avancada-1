#include <iostream>

#include "Triangulo.h"

int main() {
    Triangulo t1(3, 4);
    t1.desenha();       // com sobrescrita
    t1.imprimeLados();  // sem sobrescrita


    return 0;
}
