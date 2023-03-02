#include <iostream>

int main(){
    
    // Foreach Loop 
    // Sintaxe mais curta em comparação ao for loop,
    // mas sendo menos flexivel
    
    std::string students[] = {"Bob Esponja","Patrick","Lula Molusco","Sandy"};
    
    // Imprimindo todos os elementos de um array usando um foreach loop
    // Primeiro damos o tipo sendo string nesse caso
    // Segundo damos um nome a uma variavel no caso student
    // Terceiro damos o nome do nosso array

    for(std::string student : students){
       std::cout << student << '\n';     
    }   
    
    
    return 0;
}