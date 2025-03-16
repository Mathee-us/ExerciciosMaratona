#include <bits/stdc++.h>

using namespace std;
int main(){
    string s,aux;
    int j=0;
    vector<int> v;

    cin >> s;

    for(int i=0;i<s.length();i++){
        if (s[i]!='+'){
            aux=s[i];//converte a string
            v.push_back(stoi(aux));//converte a string para inteiro
            j++;
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i];
        if(i!=v.size()-1){
            cout << "+";
        }
    }



    return 0;
}