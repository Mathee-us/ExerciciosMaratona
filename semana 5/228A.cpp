#include <bits/stdc++.h>

using namespace std;
int main(){

    vector<int> v;
    int val, cores=0;
    for(int i=0;i<4;i++){
        cin>>val;
        auto it= find(v.begin(),v.end(),val);// procura e retorna um ponteiro para o valor

        if(it==v.end()){ // se n encontrou o elemento no vetor
            cores++;
        }

        v.push_back(val);
    }

    cout<<4-cores<<endl;
    return 0;
}