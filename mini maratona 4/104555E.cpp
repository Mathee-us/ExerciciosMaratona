#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

// Função para calcular a soma dos dígitos de um número.
int sumDigits(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}
// logica: processar flores com a mesma quantidade de polen de uma vez
int main(){

    int N;
    ll K;
    cin >> N >> K;

    const int MAX_VAL = 1000000;
    // Vetor de frequências: freq[x] = número de flores com x pólen.
    vector<ll> freq(MAX_VAL + 1, 0);
    int val, currentMax = 0;
    for (int i = 0; i < N; i++){
        cin >> val;
        freq[val]++;
        if(val > currentMax) currentMax = val;
    }

    // Enquanto houver turnos a processar e houver flores
    while (K > 0 && currentMax >= 0) {
        // Encontrar a maior quantidade de pólen disponível.
        while (currentMax >= 0 && freq[currentMax] == 0)
            currentMax--;
        if(currentMax < 0) break;

        // Se o número de flores com 'currentMax' for suficiente para atingir o turno K:
        if(K <= freq[currentMax]){
            cout << sumDigits(currentMax) << "\n";
            return 0;
        }

        // Caso contrário, processamos todas as flores com 'currentMax' pólen.
        K -= freq[currentMax];
        int coletado = sumDigits(currentMax);
        int novoValor = currentMax - coletado;
        freq[novoValor] += freq[currentMax];
        freq[currentMax] = 0;
    }

    // Se todas as flores estiverem em 0 ou K ultrapassar as operações, Gertrude coleta 0.
    cout << 0 << "\n";
    return 0;
}
