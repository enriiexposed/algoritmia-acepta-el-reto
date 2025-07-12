#include <iostream>
#include <fstream>

//#define DOMJUDGE
#define INTMAX 1000000000
using namespace std;

bool casoDePrueba() {
    //leer caso de prueba final
    int n; cin >> n;
    if (n == 0) {
        return false;
    }
    else {
        int last, less, current;
        cin >> last;
        less = last;
        n--;
        while(n--) {
            cin >> current;
            if (current > last) {
                if (current < less) {
                    cout << "NO\n";
                    return false;
                }
                less = current;
            }
            last = current;
        }
        cout << "SI\n";
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
#endif
    return 0;
}