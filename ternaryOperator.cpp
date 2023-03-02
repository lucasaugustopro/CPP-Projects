#include <iostream>

int main(){
    
    // Operador ternario ?: = representa um if/else 
    // condição ? expressão1 : expressão2;

    int grade = 75;
    // ? funciona como um if
    // : funciona como um else
    (grade >= 60) ? std::cout << "Voce passou" : std::cout << "Voce reprovou";

    return 0;
}