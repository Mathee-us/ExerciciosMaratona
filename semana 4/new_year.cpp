#include <bits/stdc++.h>

using namespace std;
int main(){

    vector<int> v;
    double media;
    int sum=0;
    int aux;

    for(int i=0;i<3;i++){
        cin >> aux;
        v.push_back(aux);
    }
    sort(v.begin(),v.end());
    media=(v[2]-v[0])/2;
    cout << media-v[0]+v[2]-media<< endl;





    return 0;
}