#include <iostream>

int main(){
    int indice = 13;
    int k = 0;
    int soma = 0;

    while(k<indice){
        k=k+1;
        soma = soma + k;
    }
    std::cout << soma ;


    return 0;
}