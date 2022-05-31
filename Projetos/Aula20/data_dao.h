#pragma once

#include <string>
#include <list>
#include "data.h"

class DataDAO {
public:
    void inserir(const Data &data);
    std::list<Data> consultar();
};

