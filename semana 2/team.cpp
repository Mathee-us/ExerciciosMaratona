#include <bits/stdc++.h>

using namespace std;
int main(){
    int v[1000][4]={0},n,soma=0,soma2=0;

    cin>>n;

    for (int i=0;i<n;i++){
        for (int j=0;j<3;j++){
            cin>>v[i][j];
            if(v[i][j]==1){
                soma++;
            }
        }
        if(soma>=2){
            soma2++;
        }
        soma=0;
    }

    cout<<soma2<<endl;



    return 0;
}