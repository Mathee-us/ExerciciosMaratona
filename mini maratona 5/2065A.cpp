#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string W;
        cin >> W;
        // Remove the last two characters ("us") and append "i"
        string root = W.substr(0, W.size() - 2);
        cout << root + "i" << "\n";
    }

    return 0;
}
