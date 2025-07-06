#include <iostream>
#include <vector>

using namespace std;

int solucion(vector<int> v, int tren, int anden) {
    int a = 0, b = tren - 1;

    int valorDelante = 0, valorDetras = 0;
    int delante = 0, detras = 0;
    auto ret = 0;

    for(int i = b + 1; i < tren; i++) {
        detras += v[i];
        valorDetras += abs(i - b) * v[i];
    }

    ret += valorDelante + valorDetras;

    while(b + 1 < anden) {
        valorDelante += v[a];
        valorDelante += delante;
        valorDetras -= detras;
        detras -= v[b + 1];
        ret = min(ret, valorDelante + valorDetras);
        a++; b++;
    }

    return ret;
}


bool casoDePrueba() {

    int tren, anden; cin >> tren >> anden;
    if (tren == 0 && anden == 0){
        return false;
    }
    else {
        vector<int> v;
        int sumaInterv = 0;
        for(int i = 0; i< anden; i++) {
            cin >> v[i];
        }
        cout << solucion(v, tren, anden) << endl;
        return true;
    }

} // casoDePrueba

int main() {

    while(casoDePrueba()) {
    }
  
    return 0;
}