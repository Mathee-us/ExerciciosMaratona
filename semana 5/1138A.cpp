#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=0,v[100000],v2[5],min=0, passado=0;

    for(int & i : v2){
        i=1;
    }

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }



    for(int i=0;i<n;i++){

        if((v[i]==1) && (passado==1)) { // se igual soma
            v2[1]++;// os campos 1 e 2 tem a quantidade deles em seguida
        }
        else if((v[i]==2 )&& (passado==2)){
            v2[2]++;
        }
        else{ // se atual diferente do passado
            if(v2[1]>v2[2]){//
                if(min< v2[2])// pra ser adicionado a variavel tem q ser o menor pois é a quantidade de iguais, e maior que o obtido anteriormente
                    min=v2[2];
            }
            else
                if(min< v2[1])
                    min=v2[1];

            v2[v[i]]=1;
            passado=v[i];

        }
    }

    if(v2[1]>v2[2]){ // faz denovo a verificação caso fique maior no final
        if(min< v2[2])
            min=v2[2];
    }
    else
        if(min< v2[1])
            min=v2[1];

    cout<<min*2<< endl;


    return 0;
}
