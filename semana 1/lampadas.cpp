#include <iostream>
#include <vector>

int main(){
    int a=0,b=0,vezes,interruptor;

    scanf("%d",&vezes); // Número de vezes que o interruptor foi acionado

    for( int i=0;i<vezes;i++){
        scanf("%d",&interruptor);

        if(interruptor==1) // Se o interruptor for 1, a lâmpada a é acionada
            a++;
        else if(interruptor==2) { // Se o interruptor for 2, a lâmpada b é acionada
            b++;
            a++;
        }
    }
    printf("%d\n",a%2); // Se a lâmpada a for acionada um número ímpar de vezes, a lâmpada a estará acesa
    printf("%d\n",b%2);// Se a lâmpada b for acionada um número ímpar de vezes, a lâmpada b estará acesa

    return 0;
}