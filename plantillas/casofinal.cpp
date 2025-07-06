#include <iostream>
#include <fstream>

//#define DOMJUDGE

using namespace std;

bool casoDePrueba() {

    //leer caso de prueba final
    if () {
        return false;
    }
    else {
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