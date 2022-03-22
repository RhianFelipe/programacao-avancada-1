
#include "Triangulo.h"
#include "Quadrado.h"

int main() {
    {
        Triangulo t1(3, 4);
        t1.desenha();       // com sobrescrita
        t1.imprimeLados();  // sem sobrescrita
    }

    {
        Quadrado q1(10);
        q1.desenha();
        q1.imprimeLados();
        std::cout << "Area = " << q1.getArea() << std::endl;
    }

    return 0;
}
