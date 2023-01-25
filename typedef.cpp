#include <iostream>
#include <vector>

// Um exemplo da utilização de typedef
// Alocando tipos de dados antes para ser reutilizado
// normalmente se usa _t para dizer que e uma variavel typedef

// typedef std::vector<std::pair<std::string,int>> pairlist_t;
// Um exemplo mais simples

typedef std::string text_t;
typedef int number_t;

int main(){
    // typedef e reservado para criar um nome adicional para tipos de dados
    //pairlist_t pairlist;
    
    // Alocando o tipo String para a variavel FirstName
    text_t firstName = "Lucas Augusto";
    //Alocando o tipo int para a variavel age
    number_t age = 12;

    std::cout << firstName << '\n' ;
    
    std::cout << age << '\n' ;

    return 0;

}