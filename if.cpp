#include <iostream>

int main(){
    
    // if = faz algo se for verdadeiro, 
    //se não for então não executa nada

    int age;
    std::cout << "Digite sua idade: ";
    std::cin >> age;

    // =>,<= maior ou igual e menor ou igual
    // == comparar dois numeros
   
    // Se uma condição for verdadeira a condição cai no if 
    // Se a condição do if for falsa cai no else if e se for verdadeira executa
    // Senão executa oque está no else  
    if(age >= 18){
        std::cout << "Bem-vindo ao site ";
    }
    else if(age < 0){
        std::cout << "Você ainda não nasceu";
    }
    else{
        std::cout << "Você não e velho o suficiente ";
    }
    
    return 0;
}