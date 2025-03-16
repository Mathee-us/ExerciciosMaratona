#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;

    cin >> t;

    while(t--){
        int n, k,max=0,contmax=1;
        cin >> n>>k;

        long double m[n][n],aux[n];// talvez estoure
        int i=0,j=0,c=0;


        for( i=0;i<n;i++){
           cin>>aux[i];
        }
        sort(aux,aux+n);

        //separa os valores do vetor em matriz, cada linha da matriz é um conjunto de valores que a soma é menor ou igual a k
        for( i=0,j=0,c=0;i<n-1;i++){ // todo: ta com problema, não ta pegando o ultimo elemento do vetor
            if(aux[i+1]-aux[i]<=k){
                m[j][c]=aux[i];
                c++;
                contmax++;// conta quantos elementos tem em cada linha
            }
            else {
                m[j][c]=aux[i];
                j++;
                contmax++;
                c = 0;

                if (contmax>max){ // salva a em max a linha com mais elementos
                    max=contmax;
                }
                contmax=0;
            }
        }
        m[j][c]=aux[i];

        if (contmax>max){ // salva a em max a linha com mais elementos
            max=contmax;
        }

        cout << n-max << endl; // se max é a linha com mais elementos, então n-max é a quantidade min de elementos que podem ser removidos

    }





    return 0;
}