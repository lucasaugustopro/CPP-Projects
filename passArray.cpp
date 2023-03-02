#include <iostream>

double getTotal(double prices[], int size);

int main(){
    // Passando um Array a uma função.  
    // E somando todos os seus elementos
    // Abaixo estamos declarando os elementos 
    double prices [] = {1.2,23,32,4,63,58,97};
    // Colocando o tamanho do array na variavel size
    int size = sizeof(prices)/sizeof(prices[0]);
    // Criando uma variavel total que vai receber uma função getTotal que recebe como parametro 
    // prices que e o array e size que e o tamanho do array
    // Passando array como parametro pra função so e preciso o nome sem []
    double total = getTotal(prices, size);
    std::cout << "$" << total;
    
    
    return 0;
}

// Declarando um array para função e necessário o nome da função seguido de []
double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}