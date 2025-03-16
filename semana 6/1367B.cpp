#include <bits/stdc++.h>

using namespace std;

void trocarElementos(vector<int>& vetor, int pos1, int pos2) {
    int temp = vetor[pos1];
    vetor[pos1] = vetor[pos2];
    vetor[pos2] = temp;
}


int main(){

    int t,ind,val,f[3];
    vector<int> a;

    cin>>t;

    for(int i=0;i<t;i++){
        cin>>ind;
        f[0]=f[1]=0;
        for(int j=0;j<ind;j++){
            cin>>val;
            a.push_back(val);
            if((a[j]%2==0) && j%2==1)// elemento par em indice impar
                f[0]++;
            else if((a[j]%2==1) && j%2==0) //elemento impar e indice par
                f[1]++;
        }

        if(f[1]==f[0])
            cout<<f[1]<<endl;
        else
            cout<<-1<<endl;

        //zerando tudo p proxima rodada
        a.clear();

    }

    return 0;
}