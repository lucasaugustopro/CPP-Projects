#include <iostream>

int main(){

    std::string name;
    std::cout << "Digite seu nome: ";
    std::getline(std::cin, name);
    
    // O metodo erase apaga os caracteres entre as posições que colocarmos
    // Dado o nome Lucas A e apagando as posições entre 0 e 3
    // Sobra os caracteres as A no final
    name.erase(0, 3);
    std::cout << name;    

    //***********************************************
    // O metodo find me da a posição de um caracter especifico em uma String
    // Nesse caso estamos procurando espaços vazios
    // Dado o nome Lucas A
    // O metodo vai devolver a posição 5 onde e encontrado o primeiro espaço em branco
    //std::cout << name.find(' ');
    
    //*****************************
    // O metodo insert insere um caracter antes da posição que voce escolher
    // Sendo que nesse caso a posição e a 0 ou index a primeira posição
    // Então ele insere o @ antes da index
    //name.insert(0, "@");
    //std::cout << name;
    
    //*****************************
    // O metodo at mostra oque esta em certas posições dentro de um String
    // Nesse caso sendo 0 o primeiro caracter da String digitada pelo usuario
    //std::cout << name.at(0);
    
    /******************************** 
    // O metodo append adiciona string a variavel adicionando nesse caso
    // @gmail.com no final da string name
    
    name.append("@gmail.com");
    std::cout << "Seu user name e" << name;
    */
    
    //*****************************
    // O metodo clear limpa valor que esta na variavel retornando nada
    /*
    name.clear();
    std::cout << "Ola" << name;
    */
    
    //********************************  
    // O metodo empty retorna se a string esta vazia ou nao
    // Retorna sempre um valor booleano
    // Caso nao digite nada a string estara vazia entao cai na primeira condição
    // Se digitar cai na segunda
    /*
    if(name.empty()){
        std::cout << "Voce nao digitou seu nome";
    }else{
        std::cout << "Ola " << name;
    }
    */
    
    //*********************************
    // O metodo length da o comprimento de uma String
    
    /*
    if(name.length()> 12){
        std::cout << "Seu nome nao pode ter mais de 12 caracteres";
    }else{
        std::cout << "Bem-vindo " << name;
    }
    */

    return 0;
}