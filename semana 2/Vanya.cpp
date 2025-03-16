#include <bits/stdc++.h>

using namespace std;

int main(){
    int v[1000]= {0},n ,h;
    cin >> n >> h;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x > h){
            v[i] = 2;
        }
        else{
            v[i] = 1;
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
    }
    cout << sum << endl;




    return 0;
}