#include <iostream>
using namespace std;

#include "data.h"
#include "data_dao.h"


int main() {
    Data d1(12, 12, 2012);
    Data d2(0, 0, 0);

//    cout << "Digite uma data: ";
//    cin >> d2;

    cout << "Data 1: " << d1 << endl;
    cout << "Data 2: " << d2 << endl;

    DataDAO dao;
    dao.inserir(d1);
//    dao.inserir(d2);

    auto datas = dao.consultar();
    for (Data data: datas) {
        cout << " - " << data << endl;
    }


    return 0;
}
