#include <iostream>
#include <vector>

using namespace std;

bool solucion(int& ret, vector<int> v, int n, int c) {
    int suma = 0;
    
    int a = 0;
    int b = c - 1;

    int maxCant = 0;

    ret = n;

    for(int i = 0; i<b; i++) {
        suma += v[i];
    }

    while (b + 1 < n) {
        if (suma % 2 == 0) {
            if (suma > maxCant) {
                maxCant = suma;
                ret = a + 1;
            }
        }

        suma -= v[a];
        a++;
        suma += v[b + 1];
        b++;
    }

    return ret != n;
}


bool casoDePrueba() {

    int n, c;
    if (!cin)
        return false;
    else {
        cin >> n >> c;
        int ret;
        vector<int> v; 

        for(int i = 0; i < n; i++)
            cin >> v[i];

        if (solucion(ret, v, n, c)) {
            cout << ret << endl;
        } else {
            cout << "SIN ADORNOS" << endl;
        }
        return true;
    }

} // casoDePrueba

int main() {

    while(casoDePrueba()) {
    }
  
    return 0;
}