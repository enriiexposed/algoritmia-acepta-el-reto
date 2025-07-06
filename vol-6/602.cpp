#include <iostream>
using namespace std;

long casoDePrueba(long cantidad) {
    auto paga1 = 1, paga2 = 1;
    auto tot = paga1 + paga2;
    auto ret = 2;

    while(tot < cantidad) {
        auto aux = 2*paga1 + paga2;
        tot += (aux);
        paga1 = paga2;
        paga2 = aux;

        ret++;
    }

    return ret;
} 

int main() {
    unsigned int numCasos;

    cin >> numCasos;
    for (unsigned int i = 0; i < numCasos; ++i) {
        long cant; cin >> cant;
        cout << casoDePrueba(cant) << endl;
    }
  
    return 0;
}