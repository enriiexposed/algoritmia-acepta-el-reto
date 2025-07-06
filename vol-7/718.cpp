#include <iostream>
#include <fstream>
#include <algorithm>

//#define DOMJUDGE

using namespace std;

long solucion(int v[], int p) {
    auto i = 1;
    auto ult_elem = v[0];
    auto count_iguales = 1;
    auto ret = 0;

    while (i < p) {
        if (v[i] == ult_elem) {
            count_iguales++;
        }
        else {
            ret += count_iguales / 2;
            count_iguales = 1;
            ult_elem = v[i];
        }
        ++i;
    }

    return ret + (count_iguales / 2);
}



bool casoDePrueba() {

    //leer caso de prueba final
    int p; cin >> p;
    if (p == 0) {
        return false;
    }
    else {
        int v[200000];
        for (int i = 0; i < p; i++) {
            cin >> v[i];
        }
        sort(v, v + p);
        cout << solucion(v, p) << '\n';
        // CÓDIGO PRINCIPAL AQUÍ
        return true;
     }

} // casoDePrueba

int main() {
    // ajuste para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
    std::ifstream in("../in");
    auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif
    while(casoDePrueba()) {
    }
#ifndef DOMJUDGE
    std::cin.rdbuf(cinbuf);
    system("pause");
#endif
    return 0;
}