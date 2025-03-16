#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long S = (long long) n * (n + 1) / 2;

    if (S % 2 != 0) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    long long target = S / 2;
    vector<bool> chosen(n + 1, false);

    for (int i = n; i >= 1; i--){
        if (i <= target) {
            chosen[i] = true;
            target -= i;
        }
        if (target == 0)
            break;
    }

    vector<int> setA, setB;
    for (int i = 1; i <= n; i++){
        if (chosen[i])
            setA.push_back(i);
        else
            setB.push_back(i);
    }

    cout << setA.size() << "\n";
    for (int num : setA)
        cout << num << " ";
    cout << "\n";

    cout << setB.size() << "\n";
    for (int num : setB)
        cout << num << " ";
    cout << "\n";

    return 0;
}
