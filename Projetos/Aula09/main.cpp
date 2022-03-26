#include <iostream>

#include "Retangulo.h"
#include "Lista.h"

int main() {
    Retangulo r(3, 4);
    r.desenha();

    // Poligono p(20);  // ERRO! Classe abstrata não pode ser instanciada

    // Variaveis do tipo abstrato podem ser usadas apenas
    // para referencias via ponteiros
    Poligono &p = r;
    p.desenha();
    p.imprimeLados();

    // Com a interface, nossa aplicação não se preocupa com
    // a implementação das classes, e sim com o uso
    Lista *lista = new ListaSequencial();

    lista->inserir(10);
    lista->inserir(80);
    lista->inserir(40);
    lista->ordenar();

    delete lista;
    lista = nullptr;

    return 0;
}
