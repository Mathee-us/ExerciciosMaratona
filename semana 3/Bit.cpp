#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,soma=0;
    string s;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> s;
        if (s.find("++") != string::npos){
            soma++;
        }
        else{
            soma--;
        }
    }

    cout << soma << endl;



    return 0;
}