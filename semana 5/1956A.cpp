#include <bits/stdc++.h>

using namespace std;

int main(){

    int t=0,k,q, take[150],n[150];
    cin>>t;
    while(t>0){

        for(int i=149;i>0;i--){ // inicializa os vetores com 0
            take[i]=0; //os que serão tirados
            n[i]=0; // pessoas
        }

        cin>>k>>q;
        for(int i=0;i<k;i++){ //k é o numero de pessoas que serão tiradas
            cin>>take[i];
        }

        for(int i=0;i<q;i++){ //q é o número de pessoas
            cin>>n[i];

            if(n[i]<take[0]){ // se o menor elemento a ser tirado for maior que n[i], então n[i] não será retirado e terá n[i] pessoas
                cout<<n[i]<<' ';

            }
            else{
                cout<<take[0]-1<<' '; //se o menor elemento a ser tirado for menor que o numero de pessoas. quer dizer que ficará take[0]-1 pessoas
            }
        }
        cout<<endl;

        t--;
    }






    return 0;
}