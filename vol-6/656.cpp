#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solucion(vector<int>& ret, vector<string> v) {
    
}


bool casoDePrueba() {

    if (!cin)
        return false;
    else {
        int n; cin >> n;
        string dummy;
        getline(cin, dummy);

        for (int i = 0; i<n; i++) {
            vector<string> v;
            string str;
            getline(cin, str);
            v.push_back(str);

            vector<int> ret(n, n - 1);
        }    
        
        return true;
    }

} // casoDePrueba

int main() {

    while(casoDePrueba()) {
    }
  
    return 0;
}