#include <iostream>

int main(){
    // Arrays = uma estrutura de dados que guarda multiplos valores
    //          esses valores são acessados atraves do numero do index

    std::string car[] = {"Corvette", "Camaro", "Celta"};
    
    // Assinalando um diferente valor ao index do array
    // Subistituindo os valores
    car[0] = "Logan";
    
    // index = primeiro valor de um array sendo sempre o numero 0
    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';

    return 0;
}