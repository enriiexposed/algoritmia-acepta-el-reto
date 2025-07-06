#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long solucion(long v[], int p) {
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


int main() {
    int p; cin >> p;
    while (p != 0) {
        long v[200000];
        for (int i = 0; i < p; i++) {
            cin >> v[i];
        }
        sort(v, v + p);
        cout << solucion(v, p) << endl;
        cin >> p;
    }
}