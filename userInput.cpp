#include <iostream>

// cout << (Operador de inserção)
// cin >> (Operador de extração)

int main(){
    std:: string name;
    int age;
    
    // Operador << de inserção onde inserimos uma mensagem para ser mostrada.
    std::cout << "Qual e o seu nome ?";
    
    // Operador de extração esse operador armazena oqu o usuario digitou,
    // e coloca na variavel name.
   // std::cin >> name;
   // Função onde e possivel escrever seu nome completo usando espaços 
    std::getline(std::cin, name);

    std::cout << "Qual sua idade ?";
    std::cin >> age;
    
    std::cout << "Ola " << name;
    std::cout << " Sua idade e " << age;
    return 0;
}