#include <iostream>

int main(){
    
    // While = parecido com o if mas podendo repetir o código infinitas vezes se necessário.

    std::string name;

    // Loop onde enquanto for True o loop nao vai ser encerrado
    // Sendo assim se o usuario nao digitar nada so resultará na repetição infinita, 
    // do que esta dentro do while
    
    while(name.empty()){
        std::cout << "Digite seu nome: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;
    
    
    
    return 0;
}