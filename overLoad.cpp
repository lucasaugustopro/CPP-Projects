#include <iostream>

void bakerPizza(){
    std::cout << "Aqui esta sua pizza !!";
}
// Voce pode dar a funções os mesmos nomes mas não os mesmos parametros

// Em cima os parametros estão vazios 
// E abaixo e recebido como parametro uma string tipoPizza

void bakerPizza(std::string tipoPizza){
    std::cout << " Aqui esta sua pizza de " << tipoPizza;  
}


int main(){
    // Sendo assim podemos chamar a função sem parametro
    // E passando uma String chamamos a segunda função

    bakerPizza();
    bakerPizza("Calabresa");

    
    
    
    return 0;
}