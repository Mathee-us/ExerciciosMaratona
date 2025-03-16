#include <iostream>

using namespace std;

int main() {
    long numTestes;
    cin >> numTestes;

    while (numTestes--) {
        long a, b, c;
        cin >> a >> b >> c;

        long somaTotal = a + b + c;

        if (somaTotal % 2 != 0) {
            cout << "-1" << endl;
            continue;
        }

        long maximoGlobal = somaTotal / 2;
        long maximoAB = a + b;

        long resposta;
        if (maximoGlobal < maximoAB) {
            resposta = maximoGlobal;
        } else {
            resposta = maximoAB;
        }

        cout << resposta << endl;
    }

    return 0;
}