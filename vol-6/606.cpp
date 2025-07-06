#include <iostream>
#include <vector>

using namespace std;

int solucion(vector<int> v) {
    int diaAnt = v[0];
    auto ret = 1;
    int i = 1;

    while(i < v.size()) {
        if (v[i] > diaAnt) {
            ret++;
        }

        diaAnt = v[i];
        i++;
    }

    return ret;
}


bool casoDePrueba() {

    int dias; cin >> dias;
    if (dias == 0)
        return false;
    else {
        vector<int> v;
        for(int i = 0; i<dias; i++) {
            cin >> v[i];
        }

        cout << solucion(v) << endl;

        return true;
     }

} // casoDePrueba

int main() {

    while(casoDePrueba()) {
    }
  
    return 0;
}