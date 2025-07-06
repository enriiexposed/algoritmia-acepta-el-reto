#include <iostream>
#include <fstream>

//#define DOMJUDGE

using namespace std;

void resuelveCaso() {
    //resuelve aqui tu caso
    //Lee los datos
    //Calcula el resultado
    //Escribe el resultado
}

int main() {
#ifndef DOMJUDGE
    std::ifstream in("../in");
    auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif
    unsigned int numCasos;
    std::cin >> numCasos;

    // Resolvemos
    for (int i = 0; i < numCasos; ++i) {
        resuelveCaso();
    }
    // restablecimiento de cin
#ifndef DOMJUDGE
    std::cin.rdbuf(cinbuf);
    system("pause");
#endif
    return 0;
}