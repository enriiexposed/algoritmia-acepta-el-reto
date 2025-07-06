#include <iostream>
using namespace std;

long long solucion(long long a, long long b, long long n) {
    if (n == 0) {
        return a;
    }
    else if (n == 1) {
        return b;
    }
    else {
        int i = 1;
        long long ret;
        while (i < n) {
            ret = b - a;
            a = b;
            b = ret;
            i++;
        }
        
        return ret;
    }
}


bool casoDePrueba() {

    long long a, b, n; cin >> a >> b >> n;
    if (a == 0 && b == 0 && n == 0)
        return false;
    else {
        cout << solucion(a, b, n) << endl;
        return true;
    }

} // casoDePrueba

int main() {

    while (casoDePrueba()) {
    }

    return 0;
}