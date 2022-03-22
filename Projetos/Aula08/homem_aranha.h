#pragma  once

#include "homem.h"
#include "aranha.h"

class HomemAranha : public Homem, public Aranha {
public:
    HomemAranha(std::string nome) : Homem(nome), Aranha(nome) {}

    void soltarTeias() {
        std::cout << Aranha::_nome << " está soltando teias de maneira digna" << std::endl;
    }

};
