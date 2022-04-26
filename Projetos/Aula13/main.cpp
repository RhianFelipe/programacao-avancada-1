#include <iostream>
#include <string>

#include "caixa.h"
#include "vetor.h"

template<typename T>
T soma(T a, T b) {
    return a + b;
}

template<typename T, typename U>
U subt(T a, U b) {
    return a - b;
}




using namespace std;

int main() {
    Caixa<int> c1(10);
    Caixa<int> c2(900);

    Caixa<string> c3("banana");
    Caixa<string> c4("melancia");

    Caixa<float> c5(3.4);
    Caixa<bool> c6(true);
    Caixa<Caixa<int>> c7(c1);

    int vet[] = {1, 2, 3};
    Caixa<int*> c8(vet);

    Caixa<> c9(100);

    cout << "c1: " << c1.getItem() << endl;
    cout << "c2: " << c2.getItem() << endl;
    cout << "c3: " << c3.getItem() << endl;
    cout << "c4: " << c4.getItem() << endl;
    cout << "c5: " << c5.getItem() << endl;
    cout << "c6: " << c6.getItem() << endl;
    cout << "c7: " << c7.getItem().getItem() << endl;
    cout << "c8: " << c8.getItem()[0] << endl;

    cout << soma(10, 10) << endl;
    cout << soma(1.5, 3.4) << endl;
    cout << soma(1.4f, 3.4f) << endl;
    cout << subt(10, 20) << endl;
    cout << subt(10, 2.8) << endl;

    Vetor<> vetor1;
    vetor1[3] = 100;
    cout << vetor1[3] << endl;

    Vetor<int, 20> vetor20;
    vetor20[19] = 100;
    cout << vetor20[19] << endl;


    return 0;
}
