#include <iostream>
#include <vector>

using namespace std;

bool solucion() {
    
}


bool casoDePrueba() {

    int puntos, carriles;
    if (!cin)
        return false;
    else {
        cin >> puntos >> carriles;
        vector<string> v;
        for (int i = 0; i<carriles; i++) {
            cin >> v[i];
        }

        if (solucion()) {
            cout << "BICI" << endl;
        } else cout << "A PIE" << endl;

        return true;
    }

} // casoDePrueba

int main() {

    while(casoDePrueba()) {
    }
  
    return 0;
}