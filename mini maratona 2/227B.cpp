#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> pos(n + 1);

    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        pos[x] = i;
    }

    int m;
    cin >> m;

    long long vasyaComparisons = 0, petyaComparisons = 0;
    while(m--){
        int b;
        cin >> b;
        vasyaComparisons += pos[b];
        petyaComparisons += (n - pos[b] + 1);
    }

    cout << vasyaComparisons << " " << petyaComparisons;
    return 0;
}
