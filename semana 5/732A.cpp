#include <bits/stdc++.h>

using namespace std;

int main(){
    int num,r,unidade,i=1,num2;

    cin>>num>>r;

    unidade=num%10; //pegando somente a unidade do numero

    while((unidade!=0) && (unidade!=r)){ // se a unidade for 0 ou r, quer dizer que é divisivel por um deles
        num2=num*i;
        unidade=num2%10;
        i++;
    }
    if(i!=1)
        cout<<i-1<<endl;
    else
        cout<<i<<endl;

    return 0;
}