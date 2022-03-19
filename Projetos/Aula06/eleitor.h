#pragma once

class Eleitor {
public:
    static int numEleitores;

    Eleitor() {
        Eleitor::numEleitores++;
    }

private:
    // Declaração de constante interna
    const static int MAX_ELEITORES = 10;
};

// Inicializa o membro estático
int Eleitor::numEleitores = 0;

