#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int totalScore = 0;
        for (int i = 0; i < 10; i++){
            string row;
            cin >> row;
            for (int j = 0; j < 10; j++){
                if (row[j] == 'X'){
                    // Compute ring number (1-indexed) based on minimum distance from the border.
                    int ring = min({i, 9 - i, j, 9 - j}) + 1;
                    totalScore += ring;
                }
            }
        }
        cout << totalScore << "\n";
    }

    return 0;
}
