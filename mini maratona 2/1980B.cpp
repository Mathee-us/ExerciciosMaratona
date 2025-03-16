#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> cubes(n);
        for (int i = 0; i < n; i++){
            cin >> cubes[i];
        }
        int favValue = cubes[f - 1];

        vector<int> sorted = cubes;
        sort(sorted.begin(), sorted.end(), greater<int>());

        int kthValue = sorted[k - 1];


        if(kthValue > favValue){
            cout << "NO" << "\n";
        }

        else if(kthValue < favValue){
            cout << "YES" << "\n";
        }
        else {
            if(k == n){
                cout << "YES" << "\n";
            }
            else if(sorted[k] < favValue){
                cout << "YES" << "\n";
            }
            else{
                cout << "MAYBE" << "\n";
            }
        }
    }

    return 0;
}
