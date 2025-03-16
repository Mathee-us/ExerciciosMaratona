#include <iostream>

int main() {
    int maior=0, n=-1;

    while (n!=0){
        scanf("%d", &n);
        if (n>maior){
            maior = n;
        }
    }

    printf("%d\n", maior);
    return 0;
}