#include <iostream>

int main(){
    // Do While Loop = executa um bloco de código primeiro,
    //                  e repete enquanto a condição for verdadeira.

    int number;

    do{
        std::cout << "Digite un numero positivo: ";
        std::cin >> number;
    } while(number < 0);
    
    std::cout << "O numero e: " << number;
    
    return 0;
}