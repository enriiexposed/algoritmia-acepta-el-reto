#include <iostream>
#include <string>
using namespace std;

bool esLetra(char l) {
    return (l >= 65 && l <= 90) || (l >= 97 && l <= 122);
}


bool casoDePrueba(string s1, string s2) {
    int a = 0;
    int b = 0;

    while (a < s1.size()) {
        if (esLetra(s1[a]) && esLetra(s2[b])) {
            if (s1[a] == s2[b]) {
                a++; b++;
            }
            else if (s1[a] == s2[b] + ' ' || s1[a] + ' ' == s2[b]) {
                a++; b++;
            }
            else return false;
        }
        else if (!esLetra(s1[a]) && esLetra(s2[b])) {
            a++;
        }
        else if (esLetra(s1[a]) && !esLetra(s2[b])) {
            b++;
        }
        else {
            a++; b++;
        }
    }

    return b == s2.size();
}

int main() {
    unsigned int numCasos;

    cin >> numCasos;
    string s; getline(cin, s);
    for (unsigned int i = 0; i < numCasos; ++i) {
        string s1;
        string s2;
        getline(cin, s1);
        getline(cin, s2);
        cout << (casoDePrueba(s1, s2) ? "SI" : "NO") << endl;
    }

    return 0;
}