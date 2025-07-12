#include <iostream>
#include <fstream>

//#define DOMJUDGE

using namespace std;

void resuelveCaso() {
    int w, h;
    cin >> w >> h;
    int i = min(w, h);
    
    // Buscamos el máximo divisor común
    // de w y h, empezando por el menor de los dos
    // y bajando hasta 1.              
    while (i > 1 and (w % i != 0 || h % i != 0)) {
        --i;
    }

    // Importante castear a long long
    // para evitar desbordamiento
    auto res = (1LL * w * h) / (1LL * i * i);

    cout << res << '\n';
}

int main() {
#ifndef DOMJUDGE
    std::ifstream in("../in");
    auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif
    int numCasos;
    std::cin >> numCasos;

    // Resolvemos
    for (int i = 0; i < numCasos; ++i) {
        resuelveCaso();
    }
    // restablecimiento de cin
#ifndef DOMJUDGE
    std::cin.rdbuf(cinbuf);
#endif
    return 0;
}